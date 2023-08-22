//10. Leia uma velocidade em km/h (quilometros por hora) e apresente-a convertida em m/s (metros por segundo). A formula de conversao e: M = K/3.6, sendo K a velocidade em km/h e M em m/s.

#include <stdlib.h>
#include <stdio.h>

int main(){
      printf("Digite uma velocidade em kh/h: ");
      float Km;
      scanf("%f", &Km);
      float M = Km / 3.6;
      printf("A velocidade em m/s e equivalente a %f", M);
}
