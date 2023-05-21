#include<stdio.h>
#include<stdlib.h>
#define DOLAR 4.92;
main(){
	float largura, altura, frete, profundidade, valor;
	int uf;

	printf("Programa de cauculo logistico de caixas\n\n");
	system("pause");
	system("cls");
	printf("\n Por gentileza digite a largura da caixa em cm: ");
	scanf("%f", &largura);
	if(largura>50){
		system("cls");
		printf("Por politicas da empresa nos nao fazemos fretes de mercadorias com dimensoes superiores a 50cm.");
		return 0;
	}
	printf("\n Agora digite a altura da caixa em cm: ");
	scanf("%f", &altura);
	if(altura>50){
		system("cls");
		printf("Por politicas da empresa nos nao fazemos fretes de mercadorias com dimensoes superiores a 50cm.");
		return 0;	
	}
	printf("\n Agora digite a profundidade da caixa em cm: ");
	scanf("%f", &profundidade);
	if(profundidade>50){
		system("cls");
		printf("Por politicas da empresa nos nao fazemos fretes de mercadorias com dimensoes superiores a 50cm.");
		return 0;	
	}
	system("cls");
	printf("Para onde deseja enviar a mercadoria?");
	printf("\n1-RS\n2-SC\n3-PR\n4-SP\n5-AM\n6-MT\n7-MS\n8-AC\n9-GO\n10-RJ");
	printf("\nDigite a opcao desejada: ");
	scanf("%d", &uf);
	switch(uf){
		case 1:
			printf("Valor para Rio Grande Do Sul e de $5.");
			frete = 5*DOLAR;
			system("pause");
			break;
		case 2:
			printf("Valor para Santa Catarina e de $6.");
			frete = 6*DOLAR;
			system("pause");
			break;
		case 3:
			printf("Valor para Parana e de $8.");
			frete = 8*DOLAR;
			system("pause");
			break;
		case 4:
			printf("Valor para Sao Paulo e de  $12");
			frete = 12*DOLAR;
			system("pause");
			break;
		case 5:
			printf("Valor para Amazonas e de $32\n");
			frete = 32*DOLAR;
			system("pause");
			break;
		case 6:
			printf("Valor para Mato Grosso e de $21\n");
			frete = 21*DOLAR;
			system("pause");
			break;
		case 7:
			printf("Valor para Mato Grosso do sul e de $18\n");
			frete = 18*DOLAR;
			system("pause");
			break;
		case 8:
			printf("Valor para Acre e de $35\n");
			frete = 35*DOLAR;
			system("pause");
			break;
		case 9:
			printf("Valor para Goias e de $21\n");
			frete = 21*DOLAR;
			system("pause");
			break;
		case 10:
			printf("Valor para Rio de Janeio e de $12\n");
			system("pause");
			frete = 12*DOLAR;
			break;
		default:
			printf("Sua selecao nao corresponde com as regioes disponiveis.");
			return 0;
	}
	system("cls");
	printf("Qual o valor do produto? ");
	scanf("%f", &valor);
	if (valor<800.00){
		valor = frete;
		system("cls");
		printf("O valor total do frete é: %.2f", valor);
	}
	else if (valor>=800.00 && valor<1900.00){
		valor = valor*0.08;
		valor = valor + frete;
		system("cls");
		printf("O valor total do frete com seguro é: R$%.2f", valor);
	}
	else if (valor>=1900.00 && valor<3000.00){
		valor = valor*0.15;
		valor = valor + frete;
		system("cls");
		printf("O valor total do frete com seguro é: R$%.2f", valor);
	}
	else if (valor>=3000.00){
		system("cls");
		printf("Por politicas da empresa nao fazemos frete de mercadorias com valor superior a R$3000.00");
	} 
		
	
}
