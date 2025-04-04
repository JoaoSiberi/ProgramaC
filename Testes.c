#include <stdio.h>

int main (){

    int numero;

    printf("Digite um número:\n");
    scanf("%d",&numero);

    int resultado = numero % 2;

   if (numero > 0)
   {
    if (numero % 2 == 0)
    {
        printf("O número é positivo e par\n");
    }
    else {
        printf("O número é positivo e impar\nn");
    }
   }
   else if (numero == 0)
   {
    printf("O número é 0\n");
}else {
    printf("Negativo\n");
}
  
}







