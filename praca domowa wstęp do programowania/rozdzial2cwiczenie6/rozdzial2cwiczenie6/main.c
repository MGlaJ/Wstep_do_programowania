#include <stdio.h>
void a (void)
{
printf("Usmiech!");
return 0;
}
void b (void)
{
printf("\n");
return 0;
}
int main(void)
{
    a(),a(),a(),b();
    a(),a(),b();
    a();
    return 0;
}

