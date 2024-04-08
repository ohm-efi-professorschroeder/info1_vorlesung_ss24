/***********************************************************************************
 * Aufgabe                                                                         *
 * Schreiben Sie ein Programm, das eine ganze Zahl einliest und die Rechenschritte *
 * anzeigt, um die letzten vier Bits der entsprechenden Binaerzahl zu ermitteln.   *
 *                                                                                 *
 * Ausgabebeispiel mit 21:                                                         *
 *  21 / 2 =   10, Rest:    1                                                      *
 *  10 / 2 =    5, Rest:    0                                                      *
 *   5 / 2 =    2, Rest:    1                                                      *
 *   2 / 2 =    1, Rest:    0                                                      *
 ***********************************************************************************/

// logische && || !
// vergleichoperatoren == >=
// arithmetische operatoren + - * /
// binäre bzw. bitoperatoren ~ ^

#include <stdio.h>

int main()
{
    int zahl = 0;
    printf("Gib bitte ein Zahl ein: ");
    scanf("%d", &zahl);

    printf("%d / 2 = %d, Rest: %d\n", zahl, zahl / 2, zahl % 2);
    zahl /= 2;
    printf("%d / 2 = %d, Rest: %d\n", zahl, zahl / 2, zahl % 2);
    zahl /= 2;
    printf("%d / 2 = %d, Rest: %d\n", zahl, zahl / 2, zahl % 2);
    zahl /= 2;
    printf("%d / 2 = %d, Rest: %d\n", zahl, zahl / 2, zahl % 2);
}