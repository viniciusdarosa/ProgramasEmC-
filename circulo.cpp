#include <stdio.h>
#define PI 3.14159

int main()
{
    printf("Hello World");
    
    //caulculo de um circulo
    float raio, area;
    raio = 12.0;
    area = PI * raio * raio;
    printf("\narea = %f", area);
    return 0;
}