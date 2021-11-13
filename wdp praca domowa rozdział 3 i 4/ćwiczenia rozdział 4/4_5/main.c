#include <stdio.h>
#include <string.h>

int main(void)
{
  char imie[20];
  char nazwisko[20];

  printf("Jak masz na imie? Jak masz na nazwisko?\n");
  scanf("%s %s", imie, nazwisko);

  printf("%s %s\n",imie, nazwisko);
  printf("%*d %*d\n", strlen(imie), strlen(imie), strlen(nazwisko),strlen(nazwisko));

  printf("%s %s\n",imie, nazwisko);
  printf("%-*d %-*d\n", strlen(imie), strlen(imie), strlen(nazwisko),strlen(nazwisko));


  return 0;
}
