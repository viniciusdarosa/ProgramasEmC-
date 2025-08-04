#include <stdio.h>
#define PI 3.14159

int main()
{
    printf("Digite um valor para o raio: ");
    //caulculo de um circulo
    float raio, area;
    scanf("%f",&raio);
    area = PI * raio * raio;
    printf("\narea = %f", area);
    return 0;
}