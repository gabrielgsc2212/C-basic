//32. Leia um numero inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seu dobro.


#include <stdlib.h>
#include <stdio.h>

int main(){
      printf("Digite um valor inteiro: ");
      int valor;
      scanf("%d", &valor);

      printf("A soma do sucessor de seu triplo com o antecessor de seu dobro é igual a %d", ((valor * 3) + 1) + ((valor * 2) - 1));
}
