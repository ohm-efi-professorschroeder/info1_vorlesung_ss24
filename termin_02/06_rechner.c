/************************************************************************************************
 * Schreiben Sie ein Programm, das zwei Zahlen und anschliessend + oder - vom Benutzer einliest *
 * und das Ergebnis der Rechenoperation ausgibt. Hinweis: Diese Aufgabe ist ohne if zu loesen,  *
 * das erst spaeter eingefuehrt wird.                                                           *
 *                                                                                              *
 * 1. Beispiel:                                                                                 *
 * >> Geben Sie die 1. Zahl ein: 2                                                              *
 * >> Geben Sie die 2. Zahl ein: 3                                                              *
 * >> Geben Sie die gewuenschte Rechenoperation ein (+/-): -                                    *
 * 2 - 3 = -1                                                                                   *
 *                                                                                              *
 * 2. Beispiel:                                                                                 *
 * >> Geben Sie die 1. Zahl ein: 2                                                              *
 * >> Geben Sie die 2. Zahl ein: 3                                                              *
 * >> Geben Sie die gewuenschte Rechenoperation ein (+/-): +                                    *
 * 2 + 3 = 5                                                                                    *
 ************************************************************************************************/

#include <stdio.h>
int main()
{
    // Achtung: Das war ein Beispiel aus den Folien, nicht die Aufgabe, die hier bearbeitet werden sollte!
    double zahl = 42.;
    char zeichen;
    printf("Geben Sie eine Zahl ein: ");
    int eingeleseWerte = scanf("%lf", &zahl);

    printf("Eingelese Werte: %d\n", eingeleseWerte);

    getchar();

    printf("Geben Sie ein Zeichen ein: ");
    scanf("%c", &zeichen);
    printf("Sie haben die Zahl %lf und das Zeichen %c eingegeben.\n", zahl, zeichen);
    return 0;
}