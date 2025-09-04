#include <iostream>

int main()
{
    float salarioA, salarioF;
    int cargo;
    printf("Qual o seu salário atual? ");
    scanf("%f", &salarioA);
    printf("Qual o seu cargo: \n 1- Auxiliar de escritório\n 2- Secretário\n 3-  Coziheiro(a)\n 4- Enregador(a)");
    scanf("%i", &cargo);
    switch (cargo){
        case 1:
            salarioF = salarioA + salarioA*7/100;
            printf("Salario final = %.2f", salarioF);
            break;
        case 2:
            salarioF = salarioA + salarioA*9/100;
            printf("Salario final = %.2f", salarioF);
            break;
        case 3:
            salarioF = salarioA + salarioA*5/100;
            printf("Salario final = %.2f", salarioF);
            break;
        case 4:
            salarioF = salarioA + salarioA*12/100;
            printf("Salario final = %.2f", salarioF);
            break;
        default:
            printf("opção invalida");
            break;
    }

    return 0;
}