/********************************************************************************************
 * Das folgende Programm basiert auf dem Programm "rotiere" aus dem vorigen Termin.
 * Es liest eine Folge aus vier ganzen Zahlen sowie eine Anzahl n ein und und soll die
 * Zahlenfolge n mal rotieren. Dabei soll die Zahlenfolge nach jeder Rotation ausgegeben
 * werden. 
 * 
 * Aufgabe 1): Implementieren Sie das Programm. Nutzen Sie dieses Mal zu Speicherung der Zahlen
 * ein Array! Implementieren Sie die Rotation als eigene Funktion, die Arrays beliebiger
 * Länge rotiert. Implementieren Sie Ihre Ausgabe des Arrays als eigene Funktion, 
 * die Arrays beliebiger Länge ausgibt.
 * 
 * Aufgabe 2): Ändern Sie nun die Rotationsreihenfolge (wenn Sie in Aufgabe 1 nach links
 * rotiert haben, rotieren Sie nun nach rechts und umgekehrt).
 * 
 ********************************************************************************************/

#include <stdio.h>

#define MAX_ZAHLEN 100

int liesZahlenEin(int zahlen[], int anzahl) {
    int i = 0;
    for(; i < anzahl; i++) {
        if(scanf("%d", &zahlen[i]) != 1)
            break;
    }
    return i;
}

void printArray(int zahlen[], int anzahl) {
    for(int i = 0; i < anzahl; i++) {
        printf("%d ", zahlen[i]);
    }
}

// Funktion tauscht Werte, auf die pos1 und pos2 zeigen
void tausche(int* pos1, int* pos2)
{
    int temp = *pos1;
    *pos1 = *pos2;
    *pos2 = temp;
}

void rotiereArray(int zahlen[], int anzahl) {
    /*for(int i = 0; i < anzahl-1; i++) {
        tausche(&zahlen[i], &zahlen[i+1]);
    }*/
    for(int i = anzahl-1; i > 0; i--) {
        tausche(&zahlen[i], &zahlen[i-1]);
    }
}

int main()
{
    int zahlen[MAX_ZAHLEN];
    int numZahlen = 0;
    int numRotation = 0;

    printf("Wieviele Zahlen sollen eingegeben werden?\n");
    while(scanf("%d", &numZahlen) != 1 || numZahlen > MAX_ZAHLEN || numZahlen < 0) {
        printf("Fehlerhafte Eingabe!\n");
        while(getchar() != '\n');
    }

    printf("Gib %d Zahlen ein: \n", numZahlen);
    while(liesZahlenEin(zahlen, numZahlen) != numZahlen) {
        printf("Fehlerhafte Eingabe! Wiederholen!\n");
        while(getchar() != '\n');
    }

    printf("Wie oft soll rotiert werden?\n");
    while(scanf("%d", &numRotation) != 1 || numRotation < 0) {
        printf("Fehlerhafte Eingabe!\n");
        while(getchar() != '\n');
    }

    printf("Zahlen vor der Rotation: \n");
    printArray(zahlen, numZahlen);

    for(int i = 0; i < numRotation; i++) {
        rotiereArray(zahlen, numZahlen);
        printf("Nach der %d. Rotation: ", i+1);
        printArray(zahlen, numZahlen);
        printf("\n");
    }

    return 0;
}