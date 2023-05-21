//Programa que transforma celcius em fahrenheit

#include<stdio.h>

main()
{
    float cel, fah;
    printf("\n\n\n\n\t Favor a temperatura em graus celcius: ");
    scanf("%f", &cel);
    fah = (cel * 9/5) + 32;
    printf("\n\n\t A temperatura em fahrenheit é %f", fah);
}
