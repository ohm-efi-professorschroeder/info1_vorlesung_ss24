/***********************************************************************************************************************************************
 * Schreiben Sie ein Programm, dass das Würfelspiel Mäxchen simuliert. Dabei würfeln mehrere Spieler nach einander mit zwei Würfeln.           *
 * Jeder Spieler muss ein höheres Ergebnis erzielen als der Spieler zuvor, ansonsten endet das Spiel und der aktuelle Spieler verliert.        *
 * Das Ergebnis ist wird immer durch Kombination der größeren und der kleineren Augenzahl gebildet, also z.B. 3 und 5 ergibt 53. Ein Pasch ist *
 * höher als ungleiche Ergebnisse, also höher als 65. Wird wieder ein Pasch gewürfelt, so muss dieser mit höheren Augenzahlen erzielt werden   *
 * als zuvor. Das höchste Ergebnis ist 21. Normalerweise sieht nur der aktuelle Spieler sein Ergebnis und kann gegebenenfalls lügen. Der       *
 * nächste Spieler muss entscheiden, ob er das Ergebnis glaubt oder nicht. Tut er dies, geht das Spiel mit dem Ergebnis ganz normal weiter.    *
 * Glaubt er das Ergebnis nicht, wird aufgedeckt. Wurde gelogen, verliert der Lügner. Wurde nicht gelogen, verliert der Spieler, der           *
 * sehen wollte.                                                                                                                               *
 *                                                                                                                                             *
 * Implementieren Sie das Spiel mit zwei Spielern, dem Computer und Ihnen. Der Computer beginnt immer. In dieser ersten Version verzichten     *
 * wir darauf, zu lügen.                                                                                                                       *
 *                                                                                                                                             *
 * 1. beispielhafter Ablauf:                                                                                                                   *
 * Der Computer wuerfelt 3 und 5.                                                                                                              *
 * Der Spieler wuerfelt 1 und 1.                                                                                                               *
 * Der Computer wuerfelt 1 und 6.                                                                                                              *
 * Das Spiel ist vorbei! Sie gewinnen!                                                                                                         *
 *                                                                                                                                             *
 * 2. beispielhafter Ablauf:                                                                                                                   *
 * Der Computer wuerfelt 2 und 3.                                                                                                              *
 * Der Spieler wuerfelt 5 und 3.                                                                                                               *
 * Der Computer wuerfelt 2 und 6.                                                                                                              *
 * Der Spieler wuerfelt 1 und 5.                                                                                                               *
 * Das Spiel ist vorbei! Sie verlieren!                                                                                                        *
 *                                                                                                                                             *
 ***********************************************************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) < (b) ? (b) : (a))

#define SPIELER 1
#define COMPUTER 0

// <RUECKGABETYP> <NAME> ( <PARAMETER> ) { <ANWEISUNGEN> }
int wuerfeln() {
    return rand() % 6 + 1;
}

int globaleVariable = 42;

int berechne(int zahl1, int zahl2) {
    int minZahl, maxZahl;

    minZahl = MIN(zahl1, zahl2);
    maxZahl = MAX(zahl1, zahl2);

    int punkte = maxZahl * 10 + minZahl;
    if (maxZahl == minZahl) {
        punkte *= 100;
    }
    else if (maxZahl == 2 && minZahl == 1) {
        punkte *= 1000;
    }

    return punkte;
}

void ausgabe(int zahl1, int zahl2, int spielerId) {
    if(spielerId == COMPUTER) {
        printf("Computer wuerfelt %d und %d\n", zahl1, zahl2);
    }
    else {
        printf("Spieler wuerfelt %d und %d´\n", zahl1, zahl2);
    }
}

int main()
{
    srand(time(0));

    int punkte = 0;
    int neuePunkte = 0;
    int spielerId = 0;
    do {
        punkte = neuePunkte;
        int zahl1 = wuerfeln();
        int zahl2 = wuerfeln();
        neuePunkte = berechne(zahl1, zahl2);
        ausgabe(zahl1, zahl2, spielerId);
        spielerId = (spielerId + 1) % 2;
    } while(neuePunkte > punkte);

    if(spielerId == SPIELER) {
        printf("Sie haben gewonnen!\n");
    }
    else {
        printf("Sie haben verloren!\n");
    }

    // do
        // 1. Schritt: Würfeln -> Funktion
        // 2. Schritt: Punkte berechnen -> Funktion
    // while (punkte > altePunkte)


    return 0;
}
