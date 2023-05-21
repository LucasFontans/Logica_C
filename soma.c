#include<stdio.h>
#include<stdlib.h>

main() {
	int w, z, y, soma, x, a = 0;
	char s;


	printf("Programa para calcular soma de numeros.\n");
	system("pause");
	
	for(z=0; z<10; z++){
		for(x=0; x<80; x++)
			printf("\n");
		printf("Carregando");
		printf(".");
		for(w=0;w<10000; w++)
			for(x=0;x<10000; x++);
		printf(".");
		for(w=0;w<10000; w++)
			for(x=0;x<10000; x++);
		printf(".");
		for(w=0;w<10000; w++)
			for(x=0;x<10000; x++);
		printf("\n");
		for(w=0;w<10000; w++)
			for(x=0;x<10000; x++);
		for(x=0; x<80; x++)
			printf("\n");
	}
	system("cls");
	do {
		printf("\nDigite um numero:");
		scanf("%d", &x);
		if(x>a)
			a = x;
		if(x>=0)
			soma = soma + x;
		
		
		
		
		do {
			printf("\nDeseja continuar? S-Sim N-Nao\n");
			fflush(stdin);
			scanf("%c", &s);
			if(s !='s' && s!='S' && s!='n' && s!='N')
				printf("Digite uma opcao valida.");
		}while(s !='s' && s!='S' && s!='n' && s!='N');
	} while(s=='s'|| s=='S');

	printf("\nA soma total dos numeros digitados e %d.", soma);
	printf("\nO maior numero digitado e %d", a);


}
