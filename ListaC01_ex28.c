//28. Fac¸a a leitura de tres valores e apresente como resultado a soma dos quadrados dos tres valores lidos.

#include <stdlib.h>
#include <stdio.h>

int main(){
      printf("Digite o primeiro valor: ");
      float valor1;
      scanf("%f", &valor1 );

      printf("Digite o segundo valor: ");
      float valor2;
      scanf("%f", &valor2 );
      
      printf("Digite o terceiro valor: ");
      float valor3;
      scanf("%f", &valor3 );

      printf("O valor da soma dos quadrados dos tres valores e %f", (valor1 * valor1) + (valor2 * valor2) + (valor3 * valor3) );
}
