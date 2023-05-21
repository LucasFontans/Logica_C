//By Lucas Fontans

#include<stdio.h>

main(){
	int ano;
	printf("\n\n\tPrograma que identifica se o usuario e maior ou menor de idade: ");
	printf("\n\n Digite o ano que voce nasceu: ");
	scanf("%d", &ano);
	
	if(ano>2004){
		printf("\n\nVoce e menor de idade!!");
	}
	else{
		printf("\n\nVoce e maior de idade!!");
	}	
}