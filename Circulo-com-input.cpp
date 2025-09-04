#include <stdio.h>
#define PI 3.14159 //define pi com esse número

int main()
{
    printf("Digite um valor para o raio: "); //mostra na tela a mensagem
    //caulculo de um circulo
    float raio, area; //pode decimal
    scanf("%f",&raio); //pede que o usuario escrevaa
    area = PI * raio * raio;    
    printf("\narea = %f", area);//mostra o resultado
    return 0;
}
