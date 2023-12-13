#include <stdio.h>

long ggt(long x, long y)
{
    while (x != y)
    {
        if (x > y)
        {
            x = x - y;
        }
        else
        {
            y = y - x;
        }
    }
    return x;
}
long ggtRekursiv(long x, long y)
{
    if (x == y)
    {
        return x;
    }
    else if (x > y)
    {
        return ggtRekursiv(x - y, y);
    }
    else
    {
        return ggtRekursiv(x, y - x);
    }
}
int main()
{
    int a, b;
    printf("Gebe A ein: \n");
    scanf("%i", &a);
    printf("Gebe B ein: \n");
    scanf("%i", &b);

    int whileErg = ggt(a, b);
    int RekursivErg = ggtRekursiv(a, b);

    printf("Erg mit While Schleife: %i\n", whileErg);
    printf("Erg mit Rekursive Funktion: %i", RekursivErg);

    return 0;
}