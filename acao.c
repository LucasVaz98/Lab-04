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

	while(nome[i-1]!= ' ')	
	{
		aux.nome[i]=nome[i];
		i++;
	}

	aux.investimento = investimento;

	return aux;
}

acao adicionar_variacao(acao a, double variacao)
{
	int i=0;
	while(a.variacoes[i]!=0)
		i++;

	a.variacoes[i]=variacao;
	return a;

}

void reportar_acao(acao a)
{

}
