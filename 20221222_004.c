#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i, cont=0;
    printf("Digite um numero: ");
    scanf("%d", &num);
    for (i = 1; i <=num; i++)
    {
        if (num%i==0)
        {
            cont++;
        }
    }
    if(cont==2)
        printf("O numero %d e primo ", num);
    else
        printf("O numero %d nao e primo", num);
    
}