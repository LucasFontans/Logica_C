//By Lucas Fontans

#include<stdio.h>

main(){
	
	int selecao, n3, n4, st;
	float n1, n2, pt;
	
	printf("\n Programa que calcula a resistencia equivalente serie ou paralelo.");
	printf("\n\t Informe se e serie ou paralelo, sendo: \n\n\t1=Paralelo \n\t2=Serie\n\t");
	scanf("%d", &selecao);
	
	if(selecao==1){
		printf("\n\t Informe o primeiro valor: ");
		scanf("%f", &n1);
		printf("\n\t Informe o segundo numero: ");
		scanf("%f", &n2);
		pt = (n1*n2)/(n1+n2);
		printf("\n\t O valor da restencia equivalente ao paralelo é: %f", pt);
	}	
	else if(selecao==2){
		printf("\n\n\t Infome o primeiro valor: ");
		scanf("%d", &n3);
		printf("\n\n\t Infome o segundo valor: ");
		scanf("%d", &n4);
		st = n3 + n4;
		printf("\n\n\t O valor da resistencia equivalente a serie é: %d", st);
	}
	else{
		printf("\n\t Voce digitou um numero invalido.");
	}
}