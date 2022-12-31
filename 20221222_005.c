#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i=1, j=1;
    float soma;
    for (j = 1; j <=50; j++)
    {
        soma= soma+(i/j);
        i=i+2;
    }
    printf("Soma = %.1f", soma);
    return 0;
    
}