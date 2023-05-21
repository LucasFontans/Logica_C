//Programa feito por Lucas Fontans
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define PI 3.14
#define SENHA 54387

main(){
	int dado;
	char selecao;
	float height, base, ray, lado, area;
	
	printf("Digite a sua senha: ");
	scanf("%d", &dado);
	
	if(dado == SENHA)
	{	
		printf("Seja bem vindo");
		system("pause");
			
		printf("Programa que calcula a area e um circulo ou triangulo!\n\t");
		printf("Você deseja calcular C=Circulo, T=Triangulo ou Q=Quadrado?");
	    fflush(stdin);
		scanf("%c", &selecao);
		
		if(selecao == 'c' || selecao == 'C'){
			system("cls");
			printf("Voce digitou %c, ou seja calcula da area de um circulo.\n\t", selecao);
			printf("\n\tDigite a raio deste circulo: ");
			scanf("%f", &ray);
			area = PI * (pow(ray, 2));
			printf("\n\tCom base no raio que você declarou a area deste circulo é: %f", area);
		} 
		else if(selecao == 't' || selecao == 'T'){
			system("cls");
			printf("\n\tVoce digitou %c, ou seja calcula da area de um triangulo.\n\t", selecao);
			printf("Digite a base deste traingulo: ");
			scanf("%f", &base);
			printf("Agora digite a altura deste triangulo: ");
			scanf("%f", &height);
			area = (base * height) / 2;
			printf("\n\tCom base na base e altura que você declarou a area deste triagulo é: %f", area);
		}
		else if(selecao == 'q' || selecao == 'Q'){
			system("cls");
			printf("\n\tVoce digitou %c, ou seja calcula da area de um quadrado.\n\t", selecao);
			printf("Digite o lado deste quadrado: ");
			scanf("%f", &lado);
			area= pow(lado,2);
			printf("\n\tCom base na base e altura que você declarou a area deste triagulo é: %f", area);
		}
		else{
			system("cls");
			printf("\n Selecione uma opção valida!");
		}
  }
  else{
  	printf("Senha incorreta!");
  }
}