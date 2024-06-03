/**********************************************************************
 * Vervollständigen Sie die vorliegende Variante des                  *
 * Mastermind-Spiels. Der Computer erstellt eine Ziffern-Kombination, *
 * die erraten werden soll. Dazu hat der Spieler ein gewisse Anzahl   *
 * an Versuchen. Für jeden Versuch erhält der Spieler die             *
 * Rückmeldung, wie viele Positionen korrekt erraten wurden, also wie *
 * häufig der Spieler eine Ziffer an die richtige Position gesetzt    *
 * hat. Außerdem wird ausgegeben, wie viele Ziffern zwar in der       *
 * Kombination vorkommen, aber an falscher Stelle liegen. Dabei wird  *
 * für jede Ziffer in der Zielkombination maximal ein Tipp            *
 * ausgegeben. Der Benutzer soll die Länge des zu erratenden Codes    *
 * einstellen können.                                                 *
 *                                                                    *
 * Für die Spiellogik fehlen noch Funktionen, die in                  *
 * mastermind_logik.h und mastermind_logik.c ergänzt werden müssen.   *
 * Alle anderen Dateien dürfen nicht verändert werden.                *
 *                                                                    *
 * Beispiel:                                                          *
 * >> Geben Sie die Anzahl an Rateslots an (max. 20): 4               *
 * Zielkombination wird erstellt ...                                  *
 * (Wird im Spiel nicht ausgegeben: Die Kombination lautet 5 1 3 1)   *
 * >> Versuch   1 /  12: Geben Sie Ihren Rateversuch ein: 1 1 1 1     *
 *        Anzahl an richtig erkannten Positionen:               2     *
 *        Anzahl an richtig erkannten Ziffern (falsche Pos.):   0     *
 *                                                                    *
 *  ...                                                               *
 *                                                                    *
 * >> Versuch   9 /  12: Geben Sie Ihren Rateversuch ein: 1 4 5 6     *
 *        Anzahl an richtig erkannten Positionen:               0     *
 *        Anzahl an richtig erkannten Ziffern (falsche Pos.):   2     *
 *                                                                    *
 *  ...                                                               *
 *                                                                    *
 * >> Versuch  12 /  12: Geben Sie Ihren Rateversuch ein: 4 1 3 6     *
 *        Anzahl an richtig erkannten Positionen:               2     *
 *        Anzahl an richtig erkannten Ziffern (falsche Pos.):   0     *
 *                                                                    *
 * Sie haben leider verloren! Die Richtige Kombination war 5 1 3 1    *
 *                                                                    *
 **********************************************************************/

#include <stdio.h>
#include "mastermind_eingabe.h"
#include "mastermind_logik.h"

int main()
{   
    int anzahlRateSlots = 0;
    int zielKombination[MAX_ANZAHL_RATE_SLOTS];
    int rateSlots[MAX_ANZAHL_RATE_SLOTS];
    int erkanntePos = 0, erkannteZiffern = 0;
    int aktuellerVersuch;

    printf("Geben Sie die Anzahl an Rateslots an (max. %d): ", MAX_ANZAHL_RATE_SLOTS);
    anzahlRateSlots = gibMinMaxZahlEin(1, MAX_ANZAHL_RATE_SLOTS);

    printf("Zielkombination wird erstellt ...\n");
    initZielKombination(zielKombination, anzahlRateSlots);
    
    for(aktuellerVersuch = 0; (aktuellerVersuch < MAX_VERSUCHE) && (erkanntePos < anzahlRateSlots); aktuellerVersuch++)
    {
        printf("Versuch %3d / %3d: Geben Sie Ihren Rateversuch ein: ", aktuellerVersuch+1, MAX_VERSUCHE);
        gibRateVersuchEin(rateSlots, anzahlRateSlots, MIN_CODE, MAX_CODE);

        werteVersuchAus(&erkanntePos, &erkannteZiffern, rateSlots, zielKombination, anzahlRateSlots);

        printf("    Anzahl an richtig erkannten Positionen:               %d\n", erkanntePos);
        printf("    Anzahl an richtig erkannten Ziffern (falsche Pos.):   %d\n", erkannteZiffern);
    }

    if(erkanntePos == anzahlRateSlots)
        printf("\nSie haben gewonnen!\n");
    else
    {
        printf("\nSie haben leider verloren! Die Richtige Kombination war");
        for(int i = 0; i < anzahlRateSlots; i++)
            printf(" %d", zielKombination[i]);
        printf("\n");
    }

    return 0;
}