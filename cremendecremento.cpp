#include <stdio.h>

int main()
{
    int numero;
    printf("Digite um numero: ");
    scanf("%i", &numero);
    if (numero%3 == 0){
        ++numero;
        printf("%i", numero);
    }else{
        --numero;
        printf("%i", numero);
    }

    return 0;
}