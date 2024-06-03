/**************************************************************************************************************************
 * Schreiben Sie die fehlenden Funktionen für das untenstehende Programm und ergänzen Sie die mit TODO markierten         *
 * Funktionsaufrufe. Der Rest des Programms darf nicht verändert werden.                                                  *
 *                                                                                                                        *
 * Das Programm simuliert einen Ticketautomaten, der einen Preis anzeigt und der mittels Eingabe bezahlt werden soll. Der *
 * Automat gibt dann mittels Ausgabe das Restgeld in 2-Euro-Münzen, 50-Cent-Münzen und 10-Cent-Münzen zurück. Dabei       *
 * sollen immer möglichst viele der Münzen mit höheren Wert zurückgegeben werden. Wenn der Restbetrag nicht komplett      *
 * durch diese Münzen ausbezahlt werden kann, wird die Differenz einbehalten. Der zu bezahlende Preis wird als Simulation *
 * zufällig im Intervall [MIN_PREIS_IN_EUROS; MAX_PREIS_IN_EUROS] ermittelt.                                              *
 *                                                                                                                        *
 * 1. Möglicher Ablauf:                                                                                                   *
 *                                                                                                                        *
 * Ticketautomat: Achtung! Restbetraege kleiner 10 Cents koennen nicht ausbezahlt werden!                                 *
 *                                                                                                                        *
 * >> Bezahlen Sie bitte 6.31 Euro: 5                                                                                     *
 * >> Bezahlen Sie bitte 6.31 Euro: ghgf                                                                                  *
 * >> Bezahlen Sie bitte 6.31 Euro: 10.5199999999                                                                         *
 * Sie haben 10.51 Euro bezahlt. Der Restbetrag von 4.20 wird nun ausgezahlt.                                             *
 *                                                                                                                        *
 * Ihr Wechselgeld:  2x 2-Euro-Muenzen,  0x 50-Cent-Muenzen,  2x 10-Cent-Muenzen.                                         *
 *                                                                                                                        *
 * 2. Möglicher Ablauf:                                                                                                   *
 *                                                                                                                        *
 * Ticketautomat: Achtung! Restbetraege kleiner 10 Cents koennen nicht ausbezahlt werden!                                 *
 *                                                                                                                        *
 * >> Bezahlen Sie bitte 9.28 Euro: 9                                                                                     *
 * >> Bezahlen Sie bitte 9.28 Euro: 10                                                                                    *
 * Sie haben 10.00 Euro bezahlt. Der Restbetrag von 0.72 wird nun ausgezahlt.                                             *
 *                                                                                                                        *
 * Ihr Wechselgeld:  0x 2-Euro-Muenzen,  1x 50-Cent-Muenzen,  2x 10-Cent-Muenzen.                                         *
 *                                                                                                                        *
 * Der Betrag konnte nicht komplett ausgezahlt werden.                                                                    *
 *                                                                                                                        *
 **************************************************************************************************************************/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN_PREIS_IN_EUROS  5.15
#define MAX_PREIS_IN_EUROS 12.95

double ermittlePreis()                      // Funktion 1
{
    int min = MIN_PREIS_IN_EUROS * 100;
    int max = MAX_PREIS_IN_EUROS * 100;
    return (rand() % (max - min + 1) + min) / 100.f;
}

double wirfGeldEin(double preisInEuro)      // Funktion 2
{
    double bezahlterBetraginEuro = 0;

    printf("Bitte mindestens %lf Euros einwerfen!\n", preisInEuro);
    while(scanf("%lf", &bezahlterBetraginEuro) != 1 || bezahlterBetraginEuro < preisInEuro)
    {
        printf("Bitte mindestens %lf Euros einwerfen!\n", preisInEuro);
        while(getchar() != '\n'){}
    }

    return bezahlterBetraginEuro;
}

int errechneWechselgeld(double restBetrag, int* zweiEuros,
                        int* fuenfzigCent, int* zehnCent) // Funktion 3
{
    *zweiEuros = restBetrag / 2;
    *fuenfzigCent = (restBetrag - (*zweiEuros * 2)) / 0.5;
    *zehnCent = (restBetrag - (*zweiEuros * 2) - (*fuenfzigCent * 0.5)) / 0.1;
    double tmp = (restBetrag - (*zweiEuros * 2) - (*fuenfzigCent * 0.5)) - (*zehnCent * 0.1);
    return tmp == 0;
}


int main()
{
    int zweiEuroMuenzen, fuenzigCentMuenzen, zehnCentMuenzen, istWechselGeldKomplett;
    double preisInEuro, bezahlterBetragInEuro, restBetragInEuro;

    printf("\nTicketautomat: Achtung! Restbetraege kleiner 10 Cents koennen nicht ausbezahlt werden!\n\n");

    srand(time(NULL));

    // TODO: Der Preis soll in dieser Simulation zufällig ermittelt werden. Die Preisspanne ist oben als Konstanten hinterlegt.
    preisInEuro = ermittlePreis();
    // TODO: Das einzuwerfende Geld muss einer validen Eingabe entsprechen. Dafür muss u.a. mindestens der Preis bezahlt werden.
    bezahlterBetragInEuro = wirfGeldEin(preisInEuro);
    restBetragInEuro = bezahlterBetragInEuro - preisInEuro;

    printf("Sie haben %.2lf Euro bezahlt. Der Restbetrag von %.2lf wird nun ausgezahlt.\n", bezahlterBetragInEuro, restBetragInEuro);

    // TODO
    // int errechneWechselgeld(double restBetrag, int* zweiEuros,
    //                        int* fuenfzigCent, int* zehnCent)
    istWechselGeldKomplett = errechneWechselgeld(restBetragInEuro, &zweiEuroMuenzen, &fuenzigCentMuenzen, &zehnCentMuenzen);

    printf("\nIhr Wechselgeld: %2dx 2-Euro-Muenzen, %2dx 50-Cent-Muenzen, %2dx 10-Cent-Muenzen.\n", zweiEuroMuenzen, fuenzigCentMuenzen, zehnCentMuenzen);

    if(!istWechselGeldKomplett)
    {
        printf("\nDer Betrag konnte nicht komplett ausgezahlt werden.\n");
    }

    return 0;
}