//Programa que calcula o valor de uma determinante de uma matriz 2x2

#include<stdio.h>

main()
{
    float a, b, c, d, dp, ds, det;
    printf("Forneça os valores de uma matriz 2x2 sendo ela \n\t|A B| \n\t----- \n\t|C D|");
    printf("\n\tForneça o valor de A: ");
    scanf("%f", &a);
    printf("\n\tForneça o valor de B: ");
    scanf("%f", &b);
    printf("\n\tForneça o valor de C: ");
    scanf("%f", &c);
    printf("\n\tForneça o valor de D: ");
    scanf("%f", &d);
    dp = a * d;
    ds = b * c;
    det = dp - ds;
    printf("O valor determinante da matriz é: %f", det);
}
