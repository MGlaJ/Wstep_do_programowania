#include <stdio.h>

int main(void)
{
    char imie[20];
    char nazwisko[20];

    printf("Jak sie masz na imie?\n");
    scanf("%s", imie);
    printf("Jak masz na nazwisko?\n");
    scanf("%s", nazwisko);
    printf ("A wiec nazywasz sie %s, a Twoje imie to %s\n", nazwisko, imie);
    return 0;
}
