#include <stdio.h>

#define MG 60

int main(void)
{
  int minuty, gg;

  printf("Wpisz liczbe minut: \n");
  scanf("%d", &minuty);
  gg=0;
  while ((minuty/MG)>0)
  {
    gg+=1;
    minuty-=MG;
  }
  printf("%d:%d\n", gg, minuty);

  return 0;
}

