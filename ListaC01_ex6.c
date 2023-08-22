//6. Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A formula de conversao e: F = C∗(9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.

#include <stdlib.h>
#include <stdio.h>

int main(){
      printf("Digite uma temperatura em Celsius: ");
      float Celsius;
      scanf("%f", &Celsius);

      float Fahrenheit = Celsius*(9.0/5.0)+32.0;;

      printf("Este valor em Fahrenheits e igual a %f", Fahrenheit);
}
