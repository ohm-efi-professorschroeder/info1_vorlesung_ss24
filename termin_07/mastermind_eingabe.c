#include <stdio.h>
#include <ctype.h>
#include "mastermind_eingabe.h"

int gibZiffernEin(int zahlen[], int anzahl, int minZiffer, int maxZiffer)
{
    char zeichen;
    int anzahlGelesenerZiffern = 0;

    do
    {
        zeichen = getchar();

        if(isdigit(zeichen))
        {
            int ziffer = zeichen - '0';

            if((ziffer >= minZiffer) && (ziffer <= maxZiffer))
            {
                zahlen[anzahlGelesenerZiffern] = ziffer;
                anzahlGelesenerZiffern++;
            }
            else
            {
                ziffer = 0;
            }
        }

    } while((anzahlGelesenerZiffern < anzahl) && (isdigit(zeichen) || zeichen == ' '));

    while(zeichen != '\n' && getchar() != '\n') {}

    return anzahlGelesenerZiffern;
}

int gibMinMaxZahlEin(int min, int max)
{
    int zahl, geleseneWerte, istEingabeFehlerhaft;

    do
    {
        geleseneWerte = scanf("%d", &zahl);
        while(getchar() != '\n') {}

        istEingabeFehlerhaft = (geleseneWerte != 1) || (zahl < min) || (zahl > max); 

        if(istEingabeFehlerhaft)
            printf("Fehler! Erneute Eingabe: ");

    } while(istEingabeFehlerhaft);

    return zahl;
}

void gibRateVersuchEin(int rateSlots[], int anzahl, int minCode, int maxCode)
{
    while(gibZiffernEin(rateSlots, anzahl, minCode, maxCode) != anzahl)
    {
        printf("Fehler! Erneute Eingabe: ");
    }
}