/********************************************************************************************
 * Eingabeprüfung
 * 
 * Schreiben Sie ein Programm, das einen Preis in Euro als Kommazahl vom Benutzer abfragt 
 * und diesen dann mittels explizitem casting in Euros und Cents zerlegt und ausgibt.
 * Falls eine ungültige Eingabe gemacht wird (z.B. eine negative Zahl oder Buchstaben), 
 * geben Sie eine entsprechende Meldung aus und wiederholen sie die Eingabeabfrage solange,
 * bis eine gültige Eingabe erfolgt ist.
 * 
 * 1. Beispiel:
 * >> Geben Sie einen Preis in Euro ein: 12.53
 * Der Preis ist 12 Euro und 53 Cents.
 * 
 * 2. Beispiel:
 * >> Geben Sie einen Preis in Euro ein: abc
 * Eingabe ungueltig. Geben Sie eine positive Zahl ein!
 * >> Geben Sie einen Preis in Euro ein: 32.12
 * Der Preis ist 32 Euro und 12 Cents.
 *********************************************************************************************/

#include <stdio.h>

int main()
{
    double preis = 0.;

    /*printf("Geben Sie einen Preis in Euro ein: ");
    int eingeleseneWerte = scanf("%lf", &preis);
    while (eingeleseneWerte < 1 || preis < 0) {
        while(getchar() != '\n'){};
        printf("Geben Sie einen Preis in Euro ein: ");
        eingeleseneWerte = scanf("%lf", &preis);
    }*/

    int eingeleseneWerte = 0;
    do {
        printf("Geben Sie einen Preis in Euro ein: ");
        eingeleseneWerte = scanf("%lf", &preis);
        while(getchar() != '\n'){};
    } while (eingeleseneWerte < 1 || preis < 0);

    /*
    while (<BEDINGUNG>) {
        <Anweisungen>
    }

    do {
        <ANWEISUNGEN>
    } while (<BEDINGUNG>);
    */

    int euros = (int)preis;
    int cents = (int)(preis * 100)-euros*100;
    printf("Der Preis ist %d Euros und %d Cents\n", euros, cents);

    return 0;
}