#include <stdio.h>
#include <stdlib.h>

int main()
{

float max,min,num;
int i;

for(i=0;i<15;i++) {
printf("Digite um numero: ");
scanf("%f",&num);

if (i == 0)
max = min = num;
printf("Numero: %.1f\n",num);
if (num > max)
max = num;
printf("MAIOR: %.1f\n",max);
if (num < min)
min = num;
printf("MENOR: %.1f\n",min);
}

printf("O NUMERO MAIOR E:%.1f\n",max);
printf("O NUMERO MENOR E:%.1f\n",min);

return 0;
}