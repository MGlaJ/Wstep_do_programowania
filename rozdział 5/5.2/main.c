#include <stdio.h>

int main(void)
{
  int liczba, i;
  printf("Wpisz liczbe: \n");
  scanf("%d", &liczba);
  i=liczba;
  while(i<=liczba+10)
  {
    printf("%d\n", i);
    i++;
  }
  return 0;
}
