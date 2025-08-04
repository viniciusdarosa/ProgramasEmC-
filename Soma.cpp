#include <iostream>

int main()
{
    int n1, n2, conta;
   printf("Digite um número inteiro: ");
   scanf("%i",&n1);
   printf("Digite outro número inteiro: ");
   scanf("%i",&n2);
   conta = n1 + n2;
   if (conta>=10){
       printf("conta = %i", conta);
   }else{
       printf("o número é menor que 10");
   }

    return 0;
}