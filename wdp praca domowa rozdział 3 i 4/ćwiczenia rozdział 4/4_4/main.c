#include <stdio.h>

int main(void)
{
  char imie[15];
  int wzrost;

  printf("Ile masz wzrostu (podaj wartosc w cm)?\n");
  scanf("%d", &wzrost);
  printf("Jak masz na imie?\n");
  scanf("%s", imie);
  printf("%s, masz %.2f metra wzrostu.\n", imie, wzrost/100.0);

  return 0;
}
