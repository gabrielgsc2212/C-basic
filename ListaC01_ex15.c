//15. Leia um angulo em radianos e apresente-o convertido em graus. A formula de conversao e: G = R ∗ 180/π, sendo G o angulo em graus e R em radianos e π = 3.14.

#include <stdlib.h>
#include <stdio.h>

int main(){
      printf("Digite um valor em radianos: ");
      float rad;
      scanf("%f", &rad);
      float graus = rad * 180 / 3.14;
      printf("O respectivo valor em graus e %f", graus);
}
