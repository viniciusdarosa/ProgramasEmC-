#include <iostream>

int main()
{
    int n1, n2, conta; //define como int
   printf("Digite um número inteiro: ");    //print mensagem
   scanf("%i",&n1);    //pede o n1
   printf("Digite outro número inteiro: "); //print mensagem
   scanf("%i",&n2);    //pede o n2
   conta = n1 + n2;    //conta
   if (conta>=10){    //se conta maior ou igual a 10
       printf("conta = %i", conta); //mostra isso
   }else{    //se não
       printf("o número é menor que 10");    //mostra isso
   }

    return 0;
}
