#include <iostream>

int main()
{
    int idade;
    printf("Qual a sua idade? ");
    scanf("%i", &idade);
    if (idade<18){
        printf("você é criança");
    }else{if (idade<65){
        printf("Você é adulto");
    }else{
        printf("Véio(a)");
    }
    }

    return 0;
}