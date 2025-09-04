#include <stdio.h>
#define PI 3.14159  //define pi com esse valor

int main()
{
    printf("Hello World");    //mostra hello world
    
    //caulculo de um circulo
    float raio, area;
    raio = 12.0;
    area = PI * raio * raio;
    printf("\narea = %f", area);
    return 0;
}
