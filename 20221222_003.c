#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int soma_i = 0;
    int soma_p = 0;
    do
    {
        printf("Digite um numero inteiro: ");
        scanf("%d", &num);
        if (num<0)
        {
            break;
        }
        if (num>1000)
        {
            break;
        }
        
        
        if (num%2==0)
        {
            soma_p = num+soma_p;
        }
        else
        {
            soma_i = soma_i+num;
        }
        
        
    } while (num>=0);
    printf("A soma dos numeros pares = %d\n", soma_p);
    printf("A soma dos numeros impares = %d\n", soma_i);
 }
    
