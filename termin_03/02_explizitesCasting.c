/********************************************************************************************
 * Schreiben Sie ein Programm, das einen Preis in Euro als Kommazahl vom Benutzer abfragt 
 * und diesen dann mittels explizitem casting in Euros und Cents zerlegt und ausgibt.
 * Brechen Sie die Ausführung des Programms ab, wenn der Benutzer eine falsche Eingabe 
 * (z.B. keine gültige Zahl) gemacht hat.       
 * 
 * 1. Beispiel:
 * >> Geben Sie einen Preis in Euro ein: 12.53
 * Der Preis ist 12 Euro und 53 Cents.
 * 
 * 2. Beispiel:
 * >> Geben Sie einen Preis in Euro ein: abc
 * Ungültige Eingabe!
 ********************************************************************************************/

#include <stdio.h>

int main()
{
    double preis = 0.;
    printf("Geben Sie einen Preis in Euro ein: ");
    int eingeleseneWerte = scanf("%lf", &preis);

    if (eingeleseneWerte < 1) {
        printf("Ungueltige Eingabe!\n");
        return -1;
    }

    getchar();

    int euros = (int)preis;
    int cents = (int)(preis * 100)-euros*100;
    printf("Der Preis ist %d Euros und %d Cents\n", euros, cents);

    return 0;
}