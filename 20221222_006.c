#include<stdio.h>
#include<stdlib.h>

int main()
{  
int soma=0,aux,n,i;
printf("Digite um numero:");
scanf("%d",&n);
aux=2*n;
for (i=1;i<=n;i++)
{  
 if(n % i == 0)
   {
    soma=soma+i;
   }
}
 if(soma==aux)
   printf("%d e um numero perfeito ",n);
 else
  printf ("%d nao e um numero perfeito",n);
 return 0;
}