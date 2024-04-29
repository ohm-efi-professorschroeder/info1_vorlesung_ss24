/***********************************************************************************
 * Aufgabe                                                                         *
 * Schreiben Sie ein Programm, das eine ganze Zahl einliest und die Rechenschritte *
 * anzeigt, um die Bits der entsprechenden Binaerzahl zu ermitteln. Nutzen Sie     *
 * eine geeignete Schleife, sodass das Programm alle Stellen der Binärzahl anzeigt.*
 * Lesen Sie zudem solange ein, bis eine positive Zahl eingegeben wird.            *
 *                                                                                 *
 * Beispiel:                                                                       *
 * >> Geben Sie eine ganze, positive Zahl ein: abc                                 *
 * >> Geben Sie eine ganze, positive Zahl ein: -5                                  *
 * >> Geben Sie eine ganze, positive Zahl ein: 21                                  *
 *  21 / 2 =   10, Rest:    1                                                      *
 *  10 / 2 =    5, Rest:    0                                                      *
 *   5 / 2 =    2, Rest:    1                                                      *
 *   2 / 2 =    1, Rest:    0                                                      *
 *                                                                                 *
 * Schreiben Sie danach das Programm so um, dass es Bit- und Shiftoperatoren       *
 * verwendet sowie negative Zahlen verarbeiten kann. Die Rechenschritte werden     *
 * nicht mehr anzeigt, sondern nur noch das Bitmuster aller gespeicherten Bits.    *
 *                                                                                 *
 * Beispiele:                                                                      *
 * >> Geben Sie eine ganze Zahl ein: abc                                           *
 * >> Geben Sie eine ganze Zahl ein: 21                                            *
 * 00000000000000000000000000010101                                                *
 *                                                                                 *
 * >> Geben Sie eine ganze Zahl ein: -9                                            *
 * 11111111111111111111111111110111                                                *
 ***********************************************************************************/

#include <stdio.h>

int main()
{
    int zahl = 0;

    int eingeleseneWerte = 0;
    do {
        printf("Gib bitte ein Zahl ein: ");
        eingeleseneWerte = scanf("%d", &zahl);
        while(getchar() != '\n');
    } while(eingeleseneWerte < 1 || zahl < 0);


    /*while(zahl != 0) {
        printf("%d / 2 = %d, Rest: %d\n", zahl, zahl / 2, zahl % 2);
        zahl /= 2;
    }*/

    /*
    for(<ZÄHLER>; <BEDINGUNG>; <ZÄHLER VERÄNDERN>)
    {
        <ANWEISUNGEN>;
    }
    */

    // zahl = 123 -> binär
    for(int i = 31; i >= 0; i--)
    {
        printf("%d", zahl >> i & 1);
    }


    return 0;
}
