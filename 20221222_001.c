#include <math.h>
#include <stdio.h>

int main(void) 
{
double Y, X0, X1, e;

 
printf("Digite o valor de Y: ");
scanf("%lf", &Y);

  X0 = Y;
  e = 0.1;

  
  do {
    X1 = 0.5 * (X0 + Y/X0);
    if (fabs(X0 - X1) < e) break;

    X0 = X1;
  } while (1);

  printf("A raiz quadrada de Y e: %lf\n", X1);
  return 0;
}

