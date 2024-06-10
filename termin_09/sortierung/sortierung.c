#include "sortierung.h"

void tausche(int *zahl1, int *zahl2)
{
    int tmp = *zahl1;
    *zahl1 = *zahl2;
    *zahl2 = tmp;
}

void selectionsort(int zahlen[], int anzahl) {
    for(int i = 0; i < anzahl-1; i++) {
        int minIndex = i;
        for(int j = i; j < anzahl; j++) {
            if(zahlen[j] < zahlen[minIndex]) {
                minIndex = j;
            }
        }
        tausche(&zahlen[i], &zahlen[minIndex]);
    }
}

void bubblesort(int zahlen[], int anzahl) {
    for(int i = 0; i < anzahl; i++) {
        for(int j = 0; j < anzahl-i-1; j++) {
            if(zahlen[j] > zahlen[j+1])
                tausche(&zahlen[j], &zahlen[j+1]);
        }
    }
}

void insertionsort(int zahlen[], int anzahl) {
    for(int i = 1; i < anzahl; i++) {
        int zahl = zahlen[i];
        int j = i;
        for(; j > 0; j--) {
            if(zahl < zahlen[j-1])
                zahlen[j] = zahlen[j-1];
        }
        zahlen[j] = zahl;
    }
}