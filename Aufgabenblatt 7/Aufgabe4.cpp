#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

bool prim(int x)
{
    if (x <= 1)
    {
        return false;
    }
    for (int y = 2; y <= sqrt(x); y++)
    {
        if (x % y == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int eingabe = 2;

    printf("Gebe eine Zahl ein \n");
    scanf("%d", &eingabe);

    bool Erg = prim(eingabe);

    if (Erg == true)
    {
        printf("Die Zahl %i ist eine Primzahl\n", eingabe);
    }
    else
    {
        printf("Die Zahl %i ist keine Primzahl \n", eingabe);
    }

    return 0;
}