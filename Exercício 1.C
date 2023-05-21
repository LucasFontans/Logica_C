//Programa para imprimir o triplo de um nº qq pelo usuario.

#include<stdio.h>

main(){
	int a,	valor;    //declaração de variáveis.
	
	printf("\n\n\n\n\n\n\n\t Programa para calcular a média de dois números\n\n");
	printf("\t Digite um número: ");
	scanf("%d", &a);
	valor = a*3;     //processamento de dados.
	
	printf("O triplo de %d é %d", a, valor);
}