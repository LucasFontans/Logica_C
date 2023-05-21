//Programa que calcula o volume de uma caixa d'água.

#include<stdio.h>

main()
{
  float high, ray, area;
  printf("Digite a altura da caixa d'água(em metros): ");
  scanf("%f", &high);
  printf("Digite o raio da caixa d'água(em metros): ");
  scanf("%f", &ray);
  area = 3.14 * (ray * ray); //transformando para metros cubicos.
  area = area * high; 
  area = area * 1000; // transformando de metros cubicos para litros.
 
  printf("O volume total da caixa é %f litros.", area);
}
