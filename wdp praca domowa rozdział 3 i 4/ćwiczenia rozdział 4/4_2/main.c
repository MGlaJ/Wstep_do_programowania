#include <stdio.h>
#include <string.h>

#define IMIE 20

int main(void)
{
  char imie[IMIE];

  printf("Jak masz na imie?\n");
  scanf("%s", imie);

  printf("\"%s\"\n", imie);
  printf("\"%20s\"\n", imie);
  printf("\"%-20s\"\n", imie);
  printf("%*s\n",strlen(imie)+3, imie);

  return 0;
}
