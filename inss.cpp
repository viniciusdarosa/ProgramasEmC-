#include <iostream>

int main()
{
    printf("Qual o seu salário? ");
    float salario, inss;
    scanf("%f",&salario);
    if (salario<=600){
        inss = salario;
        printf("salario final = %.2f", inss);
    }else{
        if (salario<=1200){
            inss = salario - salario*20/100;
            printf("salario final = %.2f", inss);
        }else{
            if (salario<=2000){
                inss = salario - salario*25/100;
                printf("salario final = %.2f", inss);
            }else{
                inss = salario - salario*30/100;
                printf("salario final = %.2f", inss);
            }
        }
    }

    return 0;
}