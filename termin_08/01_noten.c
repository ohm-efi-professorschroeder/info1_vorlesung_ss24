/**********************************************
 * Schreiben Sie ein Programm, das die Anzahl *
 * an Studierenden und Fächern erfragt,       *
 * entsprechend viele Noten einliest und am   *
 * Ende die Noten samt Durchschnitt ausgibt.  *
 *                                            *
 * Beispiel:                                  *
 *                                            *
 * >> Wie viele Studis (max. 20)? 4           *
 * >> Wie viele Faecher (max. 10)? 3          *
 * >> 1. Studi, 1. Fach: 1.0                  *
 * >> 1. Studi, 2. Fach: 1.3                  *
 * >> 1. Studi, 3. Fach: 1.7                  *
 * >> 2. Studi, 1. Fach: 3.0                  *
 * >> 2. Studi, 2. Fach: 3.3                  *
 * >> 2. Studi, 3. Fach: 1.3                  *
 * >> 3. Studi, 1. Fach: 5.0                  *
 * >> 3. Studi, 2. Fach: 4.0                  *
 * >> 3. Studi, 3. Fach: 1.7                  *
 * >> 4. Studi, 1. Fach: 2.7                  *
 * >> 4. Studi, 2. Fach: 2.3                  *
 * >> 4. Studi, 3. Fach: 1.0                  *
 *                                            *
 * Noten:                                     *
 * 1. Studi:   1.0   1.3   1.7 ->  1.33       *
 * 2. Studi:   3.0   3.3   1.3 ->  2.53       *
 * 3. Studi:   5.0   4.0   1.7 ->  3.57       *
 * 4. Studi:   2.7   2.3   1.0 ->  2.00       *
 *                                            *
 **********************************************/

#include <stdio.h>

#define MAX_STUDIS  20
#define MAX_FAECHER 10

int gibGanzeZahlEin(int min, int max);
int gibNotenEin(double noten[][MAX_FAECHER], int anzahlStudis, int anzahlFaecher);
void gibNotenAus(double noten[][MAX_FAECHER], int anzahlStudis, int anzahlFaecher);

int main()
{
    double noten[MAX_STUDIS][MAX_FAECHER];
    int anzahlStudis = 0, anzahlFaecher = 0;

    printf("Wieviele Studis?");
    anzahlStudis = gibGanzeZahlEin(1, MAX_STUDIS);

    printf("Wieviele Faecher?");
    anzahlFaecher = gibGanzeZahlEin(1, MAX_FAECHER);

    gibNotenEin(noten, anzahlStudis, anzahlFaecher);
    gibNotenAus(noten, anzahlStudis, anzahlFaecher);
    return 0;
}

int gibGanzeZahlEin(int min, int max)
{
    int zahl, geleseneWerte;

    do
    {
        geleseneWerte = scanf("%d", &zahl);
        while(getchar() != '\n') {}

        if(geleseneWerte != 1 || zahl < min || zahl > max)
            printf("Fehler! Erneute Eingabe: ");

    } while(geleseneWerte != 1 || zahl < min || zahl > max);

    return zahl;
}

double gibNoteEin()
{
    double note = 0.0;
    int geleseneWerte;

    do
    {
        geleseneWerte = scanf("%lf", &note);
        while(getchar() != '\n') {}

        if(geleseneWerte != 1 || note < 1.0 || note > 5.0)
            printf("Fehler! Erneute Eingabe: ");

    } while(geleseneWerte != 1 || note < 1.0 || note > 5.0);
    return note;
}

int gibNotenEin(double noten[][MAX_FAECHER], int anzahlStudis, int anzahlFaecher)
{
    for(int i = 0; i < anzahlStudis; i++) {
        for(int j = 0; j < anzahlFaecher; j++) {
            printf("%d. Studi, %d. Fach: ", i+1, j+1);
            noten[i][j] = gibNoteEin();
        }
    }
}

void gibNotenAus(double noten[][MAX_FAECHER], int anzahlStudis, int anzahlFaecher)
{
    for(int i = 0; i < anzahlStudis; i++) {
        printf("%d. Studi: ", i+1);
        double notenSumme = 0.0;
        for(int j = 0; j < anzahlFaecher; j++) {
            printf(" %.2lf ", noten[i][j]);
            notenSumme += noten[i][j];
        }
        printf(" --> %.2lf\n", notenSumme / anzahlFaecher);
    }
}
