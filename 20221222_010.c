#include<stdio.h>
#include<stdlib.h>

int main()
{
  int p, n, i, st;   

  printf("Digite o valor de p: ");
  scanf("%d", &p);

  st = 1;
  for (n = 1; n <= p; n++) {
    printf("%d*%d*%d = %d", n, n, n, st);
    for (i = 1; i < n; i++)
      printf("+%d", st + 2 * i);
    st = st + 2 * n;           
    printf("\n");    
  }

  return 0;
}
