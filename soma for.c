#include<stdio.h>

main(){
	
	int mat[5];
	int i=0;
	int soma = 0;
	
	for(i=0; i<5; i++){
		printf("\ndigite a primeira letra do seu nome: ");
		fflush(stdin);
		scanf("%d", &mat[i]);
		soma = soma + mat[i];
	}
	printf("%d", soma);
}

