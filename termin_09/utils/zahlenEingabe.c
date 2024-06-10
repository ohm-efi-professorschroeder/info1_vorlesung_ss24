#include <stdio.h>
#include "zahlenEingabe.h"

int gibZahlEin()
{
    return gibMinMaxZahlEin(0x80000000, 0x7fffffff);
}

int gibMinZahlEin(int min)
{
    return gibMinMaxZahlEin(min, 0x7fffffff);
}

int gibMinMaxZahlEin(int min, int max)
{
    int zahl, geleseneWerte;

    do
    {
        geleseneWerte = scanf("%d", &zahl);
        while(getchar() != '\n') {}

        if(geleseneWerte != 1 || zahl < min || zahl > max)
            printf("Fehler! Erneute Eingabe: ");

    } while(geleseneWerte != 1 || zahl < min || zahl > max);

    return zahl;
}
