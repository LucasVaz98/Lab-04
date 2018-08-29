#include <stdio.h>
#include "acao.h"
#include "portfolio.h"
#define TAM 100

int main()
{
	int nInvestiment = 0, i=0, j=0, k=0;
	char name_client[TAM];
	acao invest[TAM];
	char buffer_name[TAM];
	double buffer_invest;
	double buffer_variacao;

	for(i=0; i<TAM; i++)
	{
		for(j=0;j<MAX_SIZE_VAR; j++)
			invest[i].variacoes[j]=0;
	}

	printf("Getting started main()\n");

	/* Entradas */

	while(name_client[i-1]!='\0')
	{
		scanf("%c", &name_client[i]);
		i++;
	}

	scanf("%d", &nInvestiment);

	i=0;

	while(name_client[i]!='\0')
	{
		printf("%c", name_client[i]);
		i++;
	}

	printf("\n%d\n", nInvestiment);
	
	i=0;
	while(i<nInvestiment)
	{
		printf("New Investment\n");
		while(buffer_name[j-1]!='\0')
		{
			scanf("%c", &buffer_name[j]);
			j++;
		}
		scanf("%lf ", &buffer_invest);

		invest[i]=criar_acao(buffer_name, buffer_invest);

		scanf("%d", &invest[i].n_variacoes);

		while(k<invest[i].n_variacoes)
		{
			scanf("%lf", &buffer_variacao);
			invest[i]=adicionar_variacao(invest[i], buffer_variacao);
			k++;
		}

		k=0;
		j=0;
		i++;
	}
/* ========================== DEBUG =========================== */
	i=0, j=0, k=0;
        while(i<nInvestiment)
       	{
                while(invest[i].nome[j-1]!=' ')
                {
                        printf("%c", invest[i].nome[j]);
                        j++;
                }
		j=0;
		printf("%.2f ", invest[i].investimento);
		printf("%d ", invest[i].n_variacoes);
		while(k<invest[i].n_variacoes)
		{
			printf("%.2f ", invest[i].variacoes[k]);
				k++;

		}
		k=0;
                i++;
        }

	printf("\n");
	return 0;
}
