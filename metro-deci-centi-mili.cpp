#include <stdio.h>

int main()
{
    printf("Digite um valor em metros: ");
    float metro, centimetro, decimetro, milimetro;
    scanf("%f",&metro);
    decimetro = metro*10;
    centimetro = metro*100;
    milimetro = metro*1000;
    printf("\nmetro = %.2f", metro);
    printf("\ndecimetro = %.2f", decimetro);
    printf("\ncentimetro = %.2f", centimetro);
    printf("\n milimetro = %.2f", milimetro);
    return 0;
}