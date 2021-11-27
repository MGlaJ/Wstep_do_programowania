#include <stdio.h>

int main(void)
{
  int i=0, suma=0, ilosc;
  printf("Ile pierwszych liczb naturalnych chcesz zliczyc?\n");
  scanf("%d", &ilosc);
  while(i++<ilosc)
    suma+=i;
  printf("Suma pierwszych %d liczb naturalnych = %d\n", ilosc, suma);

  return 0;
}
