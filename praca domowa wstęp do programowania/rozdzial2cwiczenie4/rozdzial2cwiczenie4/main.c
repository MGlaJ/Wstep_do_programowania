#include <stdio.h>
void druga (void)
{
printf("Rano wstan!\n");
return 0;
}
void pierwsza (void)
{
printf("Panie Janie!\n");
return 0;
}



int main(void)
{
    printf("Panie Janie!\n");
    pierwsza();
    druga();
    return 0;
}
