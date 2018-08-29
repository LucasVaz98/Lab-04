#include <stdio.h>
#include "acao.h"
/*
typedef struct {
    char nome[MAX_SIZE_NAME];
    double investimento;
    double variacoes[MAX_SIZE_VAR];
    int n_variacoes;
} acao;
*/

acao criar_acao(char *nome, double investimento)
{
	acao aux;
	int i=0;

	while(nome[i-1]!= '\0')	
	{
		aux.nome[i]=nome[i];
		i++;
	}

	aux.investimento = investimento;

	return aux;
}

acao adicionar_variacao(acao a, double variacao)
{
	a.variacoes[a.n_variacoes]=variacao;
		
	a.n_variacoes++;

	return a;

}

void reportar_acao(acao a)
{

}
