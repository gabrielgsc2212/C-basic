//31. Leia um numero inteiro e imprima o seu antecessor e o seu sucessor.

#include <stdlib.h>
#include <stdio.h>

int main(){
      printf("Digite um valor inteiro: ");
      int valor;
      scanf("%d", &valor);

      printf("Seu antecessor é %d e seu sucessor é %d", valor - 1, valor + 1);
}
