#include <stdio.h>


int main(void)
{
  float A, B;
  A=21.3;
  B=21.29;


  printf("Wpisano liczbe %.1f lub %.1e\n", A, A);
  printf("Wpisano liczbe %+.3f lub %.3E\n", B, B);

  return 0;
}
