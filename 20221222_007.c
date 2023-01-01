#include<stdio.h>
#include<stdlib.h>

int main()
{
    float massa_i, massa_f;
    int s=0, m, h;
    printf("Digite a massa em gramas: ");
    scanf("%f", &massa_i);

    while (massa_f>=0.5)
    {
        massa_f= massa_f/2;
        s+=50;

    }
    h = s/3600;
    m = (s%3600)/60;
    s = (s%3600)%60;
    printf("A massa inicial = %.1f gramas\n", massa_i);
    printf("A massa final =  %.1f gramas\n", massa_f);
    printf("O tempo decorrido foi de %d horas, %d minutos e %d segundos\n", h, m, s);
    return 0;
    
}