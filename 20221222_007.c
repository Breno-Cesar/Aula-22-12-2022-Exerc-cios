#include<stdio.h>
#include<stdlib.h>


int main()
{
  int tempo, h, m, s;
  float massa_i, massa_f;

  printf("Massa Inicial em gramas:\n");
  scanf("%f", &massa_i);

  massa_f = massa_i;
  tempo = 0;
  while (massa_f >= 0.5) {
    massa_f = massa_f / 2;
    tempo += 50;
  }

  printf("\n");
  printf("Tempo Total: %d segundos.\n", tempo);
  h = (tempo / 3600);
  m = (tempo % 3600) / 60;
  s = (tempo % 3600) % 60;
  printf("A massa inicial = %.1f gramas\n", massa_i);
  printf("A massa final =  %.1f gramas\n", massa_f);
  printf("O tempo decorrido foi de %d horas, %d minutos e %d segundos\n", h, m, s);
}