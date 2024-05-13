/********************************************************************************************
 * Das folgende Programm liest drei ganze Zahlen ein und macht dann etwas damit.
 * 
 * 1) Überlegen Sie, was der Zweck des Programms ist und was es ausgibt (ohne es auszuführen).
 * 2) Benennen Sie die Variablen und Funktionen sinnvoll, um den Quelltext verständlicher zu
 *    machen.
 * 3) Probieren Sie das Programm aus und verifizieren Sie Ihre Vermutung.
 * 
 ********************************************************************************************/

#include <stdio.h>

void minmax(int a, int b, int* minimum, int* maximum)
{
    if(a > b) {
        *maximum = a;
        *minimum = b;
    }
    else {
        *maximum = b;
        *minimum = a;
    }
}

int main()
{
    int a, b, c, minimum, maximum;

    printf("Geben Sie drei ganze Zahlen ein: ");
    scanf("%d, %d, %d", &a, &b, &c);

    minmax(a, b, &minimum, &maximum);
    minmax(b, c, &minimum, &maximum);
    minmax(a, c, &minimum, &maximum);

    printf("Die Ausgabe ist %d, %d.\n", minimum, maximum);

    return 0;
}