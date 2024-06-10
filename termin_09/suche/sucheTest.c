/************************************************************************
 * Das untenstehende Programm ist ein Testlauf für eine Binärsuche. Bei 
 * einer Binärsuche geht man von (hier im Beispiel aufsteigend) 
 * sortierten Daten aus, die durchsucht werden sollen. Dabei wird für 
 * das in der Mitte befindliche Element geprüft, ob das zu suchende 
 * Element größer oder kleiner ist. Ist es kleiner, wird der Teil links des 
 * Mittelelements durchsucht, andernfalls der rechte Teil. Für den 
 * entsprechende Datenanteil beginnt die Suche wie eben beschrieben von 
 * vorne. Dies wiederholt man, bis man entweder das Element gefunden hat 
 * oder keine Daten mehr zu durchsuchen sind und das zu suchende Element 
 * folglich nicht enthalten ist.
 * 
 * Vervollständigen Sie das Programm unter suche.h und suche.c, indem Sie
 * die fehlenden Funktionen ergänzen. Implementieren Sie die Binärsuche 
 * einmal mit Array-Schreibweise und einmal mit Zeigerschreibweise.
 * 
 ***************************************************************************/

#include <stdio.h>
#include "suche.h"
#include "../utils/zahlenEingabe.h"

#define MAX_ZAHLEN 100

void gibArrayEin(int array[], int anzahl);
void gibArrayAus(int array[], int anzahl);

int main()
{
    int zahlen[MAX_ZAHLEN];
    int suchZahl, anzahl;
    int *suchErg;

    printf("Wie viele Zahlen (max. %d)? ", MAX_ZAHLEN);
    anzahl = gibMinMaxZahlEin(1, MAX_ZAHLEN);

    printf("Geben Sie %d Zahlen in aufsteigender Reihenfolge ein:\n", anzahl);
    gibArrayEin(zahlen, anzahl);

    printf("\nDie Daten liegen folgendermassen im Speicher:\n");
    gibArrayAus(zahlen, anzahl);

    printf("Welche Zahl soll gesucht werden? ");
    suchZahl = gibZahlEin();

    suchErg = binsuche(suchZahl, zahlen, anzahl);

    if(suchErg == NULL)
        printf("\nDie Zahl konnte nicht gefunden werden.\n");
    else
        printf("\nDie Zahl %d befindet sich an Adresse %p, also an %d. Stelle im sortierten Array.\n", 
            *suchErg, suchErg, (int)(suchErg - zahlen + 1));

    return 0;
}

void gibArrayEin(int array[], int anzahl)
{
    printf("Geben Sie die 1. Zahl ein: ");
    array[0] = gibZahlEin();

    for(int i = 1; i < anzahl; i++)
    {
        printf("Geben Sie die %d. Zahl ein (min. %d): ", i+1, array[i-1]);
        array[i] = gibMinZahlEin(array[i-1]);
    }
}

void gibArrayAus(int array[], int anzahl)
{
    printf("     Adresse     |       Wert\n");
    printf("-----------------------------------\n");
    for(int i = 0; i < anzahl; i++)
    {
        printf("%p | %16d\n", array+i, array[i]);
    }
    printf("\n");
}
