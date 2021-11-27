#include <stdio.h>

double x(double );

int main(void)
{
  double liczba;
  printf("Wpisz liczbe, ktora ma zostac podniesiona do 3 potegi:");
  scanf("%lf", &liczba);
  printf("%lf\n", x(liczba));

  return 0;
}

double x(double n)
{
  return (n*n*n);
}
