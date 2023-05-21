//Programa que calcula imposto de renda de até 5 rendas.

#include<stdio.h>

main(){
    float ren1, ren2, ren3, ren4, ren5, imp, total;
    
    printf("Programa que calcula o imposto de renda de até 5 rendas:");
    
    printf("\n\n\t Digite a primeira renda: ");
    scanf("%f",&ren1);
    printf("\n\t Digite a segunda renda: ");
    scanf("%f",&ren2);
    printf("\n\t Digite a terceira renda: ");
    scanf("%f",&ren3);
    printf("\n\t Digite a quarta renda: ");
    scanf("%f",&ren4);
    printf("\n\t Digite a quinta renda: ");
    scanf("%f",&ren5);
    
    total = (ren1 + ren2 + ren3 + ren4 + ren5)*12; //calculo do sálario em 12 meses
    imp = total*0.12; //Caculo de tributação 12%
    printf("\n\t O imposto de renda é: %f", imp);
    
}