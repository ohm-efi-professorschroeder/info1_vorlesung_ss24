/****************************************************************************
 * Ergänzen Sie die fehlenden Komponenten des untenstehenden Programmteils, *
 * sodass das Würfelspiel lauffähig wird.                                   *
 * Diese Datei darf dabei NICHT verändert werden!!!                         *
 * Hinweis: Bei Gleichstand gewinnt der Computer.
 *                                                                          *
 * Beispielhafter Ablauf des Spiels 1:                                      *
 * >> Geben Sie eine positive Zahl ein: fdfsd                               *
 * Fehler! Keine Zahl!                                                      *
 * >> Geben Sie eine positive Zahl ein: -5                                  *
 * Fehler! Die Zahl ist kleiner 1!                                          *
 * >> Geben Sie eine positive Zahl ein: 5                                   *
 *                                                                          *
 * Endstand                                                                 *
 * --------------                                                           *
 * Spieler:   21                                                            *
 * Computer:  19                                                            *
 * --------------                                                           *
 * Gewonnen!                                                                *
 *                                                                          *
 * Beispielhafter Ablauf des Spiels 2:                                      *
 * >> Geben Sie eine positive Zahl ein: -1                                  *
 * Fehler! Die Zahl ist kleiner 1!                                          *
 * >> Geben Sie eine positive Zahl ein: abc                                 *
 * Fehler! Keine Zahl!                                                      *
 * >> Geben Sie eine positive Zahl ein: 10                                  *
 *                                                                          *
 * Endstand                                                                 *
 * --------------                                                           *
 * Spieler:   33                                                            *
 * Computer:  45                                                            *
 * --------------                                                           *
 * Leider verloren!                                                         *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include "02_wuerfelSpiel.h"

#define MIN_WUERFEL_ZAHL 1
#define MAX_WUERFEL_ZAHL 6

int main()
{
    int anzahlWuerfe, summeSpieler = 0, summeCpu = 0;

    INIT_WUERFEL(RANDOM_INIT);

    anzahlWuerfe = gibPositiveZahlEin();

    for(int i = 0; i < anzahlWuerfe; i++)
    {
        summeSpieler += wuerfel(MIN_WUERFEL_ZAHL, MAX_WUERFEL_ZAHL);
    }

    for(int i = 0; i < anzahlWuerfe; i++)
    {
        summeCpu += wuerfel(MIN_WUERFEL_ZAHL, MAX_WUERFEL_ZAHL);
    }

    gibEndstandAus(summeSpieler, summeCpu);

    return 0;
}