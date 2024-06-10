/**************************************************************
 * Das untenstehende Programm soll ein Array mit Zufallswerten
 * belegen, das Array aufsteigend sortieren und anschließend 
 * ermitteln, wie häufig ein einzugebender Wert im Array vorkommt.
 * Die Häufigkeit soll einmal naiv ermittelt werden und einmal 
 * durch Verwendung Ihrer Implementierung für die binäre Suche. 
 * Das Programm vergleicht anschließend die benötigten Laufzeiten 
 * für beide Implementierungen.
 * 
 * 1. Implementieren Sie zunächst die Sortierung des Zufallsarrays.
 *    (Die Funktionsaufrufe zur Ermittlung der Vorkommenszahlen müssen 
 *     dafür auskommentiert werden.)
 * 2. Implementieren Sie nun die naive Ermittlung der Anzahl an 
 *    Vorkommen (ohne Binärsuche).
 * 3. Implementieren Sie nun die Ermittlung der Anzahl an Vorkommen 
 *    unter Verwendung Ihrer Implementierung der Binärsuche.
 * 
 ***************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "../utils/zufallsarray.h"
#include "../utils/stoppuhr.h"
#include "../utils/zahlenEingabe.h"
#include "suche.h"

#define MAX_ANZAHL 500000
#define ANZAHL MAX_ANZAHL
#define MAX    ((int)(ANZAHL * 0.2))
#define MIN    (-MAX)
#define MAX_100(n) ((n) < 100 ? n : 100)

int zaehleVorkommenNaiv(int suchElem, int array[], int anzahl);
int zaehleVorkommenBs(int suchElem, int array[], int anzahl);
int vergleiche(const void *arg1, const void *arg2);
void gibArrayAus(int array[], int anzahl);

int main()
{
    int suchZahl, anzahlVorkommen;
    int zufallszahlen[ANZAHL];

    srand(0);

    fuelleArray(zufallszahlen, ANZAHL, MIN, MAX);
    // TODO: Sortierung mit qsort

    gibArrayAus(zufallszahlen, MAX_100(ANZAHL));

    printf("Welche Zahl soll gesucht werden? ");
    suchZahl = gibZahlEin();

    printf("Zaehle naiv:\n");
    starteUhr();
    anzahlVorkommen = zaehleVorkommenNaiv(suchZahl, zufallszahlen, ANZAHL);

    printf("Die Zahl %d ist %dx enthalten. (%lf Sekunden)\n", suchZahl, anzahlVorkommen, messeZeitInSek());

    printf("Zaehle mit Binaersuche:\n");
    starteUhr();
    anzahlVorkommen = zaehleVorkommenBs(suchZahl, zufallszahlen, ANZAHL);

    printf("Die Zahl %d ist %dx enthalten. (%lf Sekunden)\n", suchZahl, anzahlVorkommen, messeZeitInSek());

    return 0;
}

void gibArrayAus(int array[], int anzahl)
{
    printf("Die ersten %d Zufallszahlen: ", anzahl);
    for(int i = 0; i < anzahl; i++)
    {
        printf(" %4d", array[i]);
    }
    printf("\n");
}

