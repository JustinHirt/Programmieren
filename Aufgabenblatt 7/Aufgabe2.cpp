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

int ergebnis(int erg){
    printf("Erg: %i", erg);
    return 1;
}

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        printf("USAGE: [NUM1] [OPERATOR] [NUM2]");
        return -1;
    }
    int num1 = strtol(argv[1], nullptr, 10);
    char op = *argv[2];
    int num2 = strtol(argv[3], nullptr, 10);
    int result = bereche(op, num1, num2);
    return ergebnis(result);
}