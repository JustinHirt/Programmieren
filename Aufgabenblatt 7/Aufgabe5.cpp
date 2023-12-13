#include <stdio.h>
#include <ctype.h>

void stat(const char *s)
{
    const char *ps = s;

    int Zeichen = 0;
    int Wort = 0;
    while (*ps != '\0')
    {
        if (isspace(*ps) != 0)
        {
            Wort++;
        }
        else if (isspace(*ps) == 0)
        {
            Zeichen++;
        }
        ps++;
    }
    printf("Anzahl der Zeichen = %i \n", Zeichen);
    printf("Anzahl der Worte = %i \n", Wort);
}

int main()
{
    char string[50];
    printf("Gebe was ein \n");
    fgets(string, sizeof(string), stdin);

    stat(string);
    return 0;
}