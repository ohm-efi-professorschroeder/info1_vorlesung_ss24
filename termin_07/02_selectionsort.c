/*****************************************************************
 * Schreiben Sie ein Programm, das vom Benutzer abfragt,         *
 * wie viele Zahlen eingelesen werden sollen und diese           *
 * dann mittels SelectionSort sortiert. SelectionSort            *
 * geht eine Liste von Zahlen von links nach rechts durch,       *
 * ermittelt das Minimum der Zahlen, die rechts der aktuellen    *
 * Position liegen inklusive der Zahl der aktuellen Position,    *
 * und tauscht das Minimum mit der Zahl auf die aktuelle         *
 * Position. Alle Zahlen bis zu dieser Position inklusive gelten *
 * dann als sortiert. Diese Prozedur wird für jede Position von  *
 * links nach rechts durchgeführt, bis alle Zahlen sortiert sind.*
 *                                                               *
 * Beispiel für Sortierung einer Liste 5 3 0 2:                  *
 * Setze Minimum der Restliste an 1. Position: 0 3 5 2           *
 * Setze Minimum der Restliste an 2. Position: 0 2 5 3           *
 * Setze Minimum der Restliste an 3. Position: 0 2 3 5           *
 *                                                               *
 * Beispielhafte Ausgabe:                                        *
 * >> Wie viele Zahlen (max. 100)? fsdf                          *
 * >> Fehler! Erneute Eingabe: -1                                *
 * >> Fehler! Erneute Eingabe: 101                               *
 * >> Fehler! Erneute Eingabe: 5                                 *
 * >> Geben Sie die 1. Zahl ein: dsf                             *
 * >> Fehler! Erneute Eingabe: 45                                *
 * >> Geben Sie die 2. Zahl ein: 1                               *
 * >> Geben Sie die 3. Zahl ein: 0                               *
 * >> Geben Sie die 4. Zahl ein: -4                              *
 * >> Geben Sie die 5. Zahl ein: 1423                            *
 * Sortierte Zahlen: -4 0 1 45 1423                              *
 *                                                               *
 *****************************************************************/

#include <stdio.h>

#define MAX_ZAHLEN 100

void liesZahlenEin(int zahlen[], int n) {
    for(int i = 0; i < n; i++) {
        printf("Gib die %d. Zahl ein: ", i+1);
        while(scanf("%d", &zahlen[i]) != 1) {
            printf("Fehlerhafte Eingabe!\n");
            while(getchar() != '\n');
        }
    }
}

void printArray(int zahlen[], int anzahl) {
    for(int i = 0; i < anzahl; i++) {
        printf("%d ", zahlen[i]);
    }
}

void tausche(int* pos1, int* pos2) {
    int temp = *pos1;
    *pos1 = *pos2;
    *pos2 = temp;
}

void selectionSort(int zahlen[], int anzahl) {
    for(int i = 0; i < anzahl-1; i++) {
        int minIndex = i;
        for(int j = i; j < anzahl; j++) {
            if(zahlen[j] < zahlen[minIndex]) {
                minIndex = j;
            }
        }
        tausche(&zahlen[i], &zahlen[minIndex]);
        printf("\nSortierung nach dem %d. Schritt: ", i+1);
        printArray(zahlen, anzahl);
    }
}


int main() {
    int zahlen[MAX_ZAHLEN];
    int n = 0;

    printf("Wieviele Zahlen? ");
    while(scanf("%d", &n) != 1 || n < 0) {
        printf("Fehlerhafte Eingabe!\n");
        while(getchar() != '\n');
    }
    while(getchar() != '\n');

    liesZahlenEin(zahlen, n);

    printArray(zahlen, n);
    selectionSort(zahlen, n);

    return 0;
}



/*
 *              | 5 3 _0_ 2
 * 1. Schritt:  0 | 3 5 _2_
 * 2. Schritt:  0 2 | 5 _3_
 * 3. Schritt:  0 2 3 | 5
 */














