//29. Leia quatro notas, calcule a media aritmetica e imprima o resultado.

#include <stdlib.h>
#include <stdio.h>

int main(){
      printf("Digite a primeira nota: ");
      float valor1;
      scanf("%f", &valor1 );

      printf("Digite a segunda nota: ");
      float valor2;
      scanf("%f", &valor2 );
      
      printf("Digite a terceira nota: ");
      float valor3;
      scanf("%f", &valor3 );

      printf("Digite a quarta nota: ");
      float valor4;
      scanf("%f", &valor4 );

      printf("O valor da soma dos quadrados dos tres valores e %f", (valor1 + valor2 + valor3 + valor4) / 4 );
}
