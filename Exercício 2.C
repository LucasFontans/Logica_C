//Apresentar a média de dois números quaisquer, digitados pelo usuário.

#include<stdio.h>

main()
{
    float num1, num2, media;
    
    printf("\n\n\n\n\n\n\n\n\n\t Digite um número qualquer: ");
    scanf("%f", &num1);
    printf("\n\t Agora digite outro numero qualquer: ");
    scanf("%f", &num2);
    
    media = (num1 + num2)/2;
    
    printf("\n\t A média entre os numeros %f e %f é %f", num1, num2, media);
}