#include <stdio.h>

int main(){
   float distancia, velocidade, tempo;
   
   scanf("%f", &distancia);
   scanf("%f", &velocidade);
   
   tempo = (distancia / velocidade);
   printf ("velocidade = %.2f, distancia = %.2f, tempo = %.2f", distancia, velocidade, tempo);

    return 0;
}
