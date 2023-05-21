#include<stdio.h>
#include<stdlib.h>

main() {
	
	int x,y,z,w;

	for(z=0; z<10; z++){
		for(x=0; x<80; x++)
			printf("\n");
		if(z<10){
			for(y=0; y<z; y++) {
				 printf(" ");
			}
		}
		printf("Carregando");
		printf(".");
		for(w=0;w<10000; w++)
			for(x=0;x<10000; x++)
				;
		printf(".");
		for(w=0;w<10000; w++)
			for(x=0;x<10000; x++)
				;
		printf(".");
		for(w=0;w<10000; w++)
			for(x=0;x<10000; x++)
				;
		printf("\n");
		for(w=0;w<10000; w++)
			for(x=0;x<10000; x++)
				;
		for(x=0; x<80; x++)
			printf("\n");
	}
	
	for(x=0; x<97; x++)
		printf("*");
	printf("\n");
	for(x=0; x<23; x++) {
		printf("*");
		if(x==11) {
			for(z=0; z<5; z++)
				printf("\t");

			printf("Bem Vindo!\t");
			for(z=0; z<5; z++)
				printf("\t");
		} else
			for(z=0; z<12; z++)
				printf("\t");
		printf("*\n");
	}
	for(x=0; x<97; x++)
		printf("*");
	printf("\n");
	system("pause");
}

