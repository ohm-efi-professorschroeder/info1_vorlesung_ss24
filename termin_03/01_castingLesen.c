/********************************************************************************************
 * Sehen Sie sich untenstehenden Code und markieren Sie alle Stellen mit einem Kommentar,   *
 * an denen eine Datentypumwandlung stattfindet. Erklaeren Sie zudem, von welchem Datentyp  * 
 * in welchen anderen umgewandelt wird und warum.                                           *
 ********************************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    int punkt1x, punkt1y;
    unsigned int punkt2x, punkt2y;
    float zeit, geschwindigkeit;

    printf("Geben Sie die Koordinaten des 1. Punkts in Metern ein (x, y): ");
    scanf("%d, %d", &punkt1x, &punkt1y); // scanf Eingabe Umwandlung

    printf("Geben Sie die Koordinaten des 2. Punkts in Metern ein (x, y): ");
    scanf("%u, %u", &punkt2x, &punkt2y);

    printf("Geben Sie die benoetigte Zeit in Sekunden ein: ");
    scanf("%f", &zeit);

    //                1: sqrt / zeit: double / float --> float->double
    //                2: Parameter von sqrt -> double
    //                  3: unsigned - signed -> unsigned
    geschwindigkeit = sqrt((punkt1x - punkt2x) * (punkt1x - punkt2x) + (punkt1y - punkt2y) * (punkt1y - punkt2y)) / zeit;

    printf("Um von der Koordinate (%d, %d) nach Koordinate (%d, %d) in %.2f Sekunden zu kommen,"
           " wird eine Geschwindigkeit von %.2f m/s benoetigt.\n",
           punkt1x, punkt1y, (int)punkt2x, (int)punkt2y, zeit, geschwindigkeit);

    // Nebenbeispiel: Wieso funktioniert dieser Ausdruck (vgl. Praktikum Übung 5.4)?
    int a = 255;
    int b = 10;
    //int wert = a*b<=255 && a*b>=0;
    unsigned char produkt = a*b;
    printf("%d", produkt);
    int wert = produkt == a*b;

    return 0;
}