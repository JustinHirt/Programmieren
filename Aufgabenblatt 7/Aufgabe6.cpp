#include <stdio.h>
#include <ctype.h>

void stat(const char *s, int *z, int *w)
{
    const char *ps = s;

    int Zeichen = 0;
    int Wort = 0;
    int a;

    while (*ps != '\0')
    {
        if (isspace(*ps) != 0)
        {
            Wort++;
            a = 0;
        }
        else if (isspace(*ps) == 0)
        {
            Zeichen++;
            a = 1;
        }
        ps++;
    }

    if (a)
    {
        Wort++;
    }
    
    *w = Wort;
    *z = Zeichen;

    printf("Anzahl der Zeichen = %i \n", *z);
    printf("Anzahl der Worte = %i \n", *w);
}

int main()
{
    int Zeichen, Worte;
    stat("Hallo Welt", &Zeichen, &Worte);
}