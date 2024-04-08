/********************************************************************************
 * Aufgabe                                                                      *
 * Welche Ausgabe liefert folgendes Programm? Erst ueberlegen, dann ausfuehren! *
 ********************************************************************************/

#include <stdio.h>

int main()
{
    int zahl1 = 1;
    double zahl2 = 2;
    double erg;

    erg = zahl1 / zahl2;
    // These 1: erg = 1
    // These 2: zufälliges Ergebnis
    // These 3: 1/2
    // These 4: 0  <-- richtig
    printf("%d / %d = %lf", zahl1, zahl2, erg);

    return 0;
}