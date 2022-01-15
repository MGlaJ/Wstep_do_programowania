#include <stdio.h>
int main (void)
{
    double a, b, c, delta, pierwiastek;
    printf ("Wpisz wyraz a rownania kwadratowego");
    scanf ("%1f", &a);
    printf ("Wpisz wyraz b rownania kwadratowego");
    scanf ("%1f", &b);
    printf ("Wpisz wyraz wolny c rownania kwadratowego");
    scanf ("%1f", &c);
    delta=(b*b)-(4*a*c);
    pierwiastek=sqrt(delta);
    if (a==0)
    {
        printf("Rownanie liniowe bx+c=0");
    }
    else
    {
        if (delta<0)
        {
            printf("Brak rozwiazan");
        }
        else
        {
            if (delta==0)
        {
            printf ("Jedno rozwiazanie x rowne %2f", (-b)/(2*a));
        }
        else
        {
            if (delta>0)
        {
            printf ("Dwa rozwiazania x1 rowne %2f", (-b-pierwiastek)/(2*a));
            printf ("x2 rowne %2f", (-b+pierwiastek)/(2*a));
        }
    }
        }
    }


return 0;
}
