/*****************************************************************
 * Verwenden Sie Ihre Lösung für Selection Sort, die Sie zur     *
 * Übung von eindimensionalen Arrays geschrieben haben.          *
 * Implementieren Sie nun die Sortierungsfunktion nur mit        *
 * Zeigern. Implementieren Sie Ihre Lösung in sortierung.h bzw.  *
 * sortierung.c                                                  *
 *                                                               *
 * Beispiel für Sortierung einer Liste 5 3 0 2:                  *
 * Setze Minimum der Restliste an 1. Position: 0 3 5 2           *
 * Setze Minimum der Restliste an 2. Position: 0 2 5 3           *
 * Setze Minimum der Restliste an 3. Position: 0 2 3 5           *
 *                                                               *
 * Beispielhafte Ausgabe:                                        *
 * >> Wie viele Zahlen (max. 100)? fsdf                          *
 * >> Fehler! Erneute Eingabe: -1                                *
 * >> Fehler! Erneute Eingabe: 101                               *
 * >> Fehler! Erneute Eingabe: 5                                 *
 * >> Geben Sie die 1. Zahl ein: dsf                             *
 * >> Fehler! Erneute Eingabe: 45                                *
 * >> Geben Sie die 2. Zahl ein: 1                               *
 * >> Geben Sie die 3. Zahl ein: 0                               *
 * >> Geben Sie die 4. Zahl ein: -4                              *
 * >> Geben Sie die 5. Zahl ein: 1423                            *
 * Sortierte Zahlen: -4 0 1 45 1423                              *
 *                                                               *
 *****************************************************************/

#include <stdio.h>
#include "../utils/zahlenEingabe.h"
#include "sortierung.h"

#define MAX_ZAHLEN 100


int main()
{
    int zahlen[MAX_ZAHLEN];
    int anzahl;

    printf("Wie viele Zahlen (max. %d)? ", MAX_ZAHLEN);
    anzahl = gibMinMaxZahlEin(0, MAX_ZAHLEN);

    for(int i = 0; i < anzahl; i++)
    {
        printf("Geben Sie die %d. Zahl ein: ", i+1);
        zahlen[i] = gibZahlEin();
    }

    //selectionsort(zahlen, anzahl);
    //bubblesort(zahlen, anzahl);
    insertionsort(zahlen, anzahl);

    printf("Sortierte Zahlen:\n");
    for(int i = 0; i < anzahl; i++)
        printf("%3d ", zahlen[i]);
    printf("\n");
    
    return 0;
}