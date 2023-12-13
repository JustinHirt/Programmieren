#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int bereche(char op, int v1, int v2)
{
    switch (op)
    {
    case '+':
        return v1 + v2;
    case '-':
        return v1 - v2;
    case '*':
        return v1 * v2;
    case '/':
        return v1 / v2;
    default:
        return -999;
    }
}

int main()
{
    int erstezahl = 0;
    char op;
    int zweitezahl = 0;

    printf("Wie lautet deine erste Zahl: \n");
    scanf("%i", &erstezahl);

    printf("Welchen Operator: \n");
    scanf(" %c", &op);

    printf("Wie lautet deine zweite Zahl: \n");
    scanf("%i", &zweitezahl);

    int ergebnis = bereche(op, erstezahl, zweitezahl);
    printf("%i %c %i = %i", erstezahl, op, zweitezahl, ergebnis);

    return 0;
}