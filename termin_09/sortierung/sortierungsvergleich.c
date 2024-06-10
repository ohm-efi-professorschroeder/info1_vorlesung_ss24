/************************************************************************************************
 * Implementieren Sie die folgenden Sortieralgorithmen und vergleichen Sie deren Laufzeit mit 
 * untenstehendem Programm:
 * 1. Nutzen Sie zunächst Ihre Lösung für SelectionSort.
 * 2. Erweitern Sie nun sortierung.h bzw. sortierung.c um InsertionSort.
 * 3. Erweitern Sie nun sortierung.h bzw. sortierung.c um BubbleSort.
 * 4. Nutzen Sie abschließend die von der C-Standardbibliothek bereitgestellte qsort-Funktion.
 * 
 * Hinweis: Sie können das Programm sortierungTest.c nutzen, um Ihre Implementierungen zu testen.
 * 
 * Welche Laufzeit-Unterschiede ergeben sich?
 *************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sortierung.h"
#include "../utils/zufallsarray.h"
#include "../utils/stoppuhr.h"

#define ANZAHL_MAX 100000
#define ANZAHL ANZAHL_MAX
#define ANZEIGE_MAX 100

void gibArrayAus(int array[], int anzahl)
{
    for(int i = 0; i < anzahl; i++)
    {
        printf(" %3d", array[i]);
    }
    printf("\n");
}

int comp(const void *a, const void *b) {
    return *((int*)a)-*((int*)b);
}

int main()
{
    int zufallszahlen[ANZAHL];
    srand(0);

    fuelleArray(zufallszahlen, ANZAHL, -ANZAHL, ANZAHL);

    if(ANZAHL <= ANZEIGE_MAX)
        gibArrayAus(zufallszahlen, ANZAHL);

    starteUhr();
    //selectionsort(zufallszahlen, ANZAHL);
    //insertionsort(zufallszahlen, ANZAHL);
    //bubblesort(zufallszahlen, ANZAHL);
    qsort(zufallszahlen, ANZAHL, sizeof(int), comp);

    printf("Zahlen sortiert nach %lf Sekunden.\n", messeZeitInSek());

    if(ANZAHL <= ANZEIGE_MAX)
        gibArrayAus(zufallszahlen, ANZAHL);

    return 0;
}
