/*****************************************************************************************
 * Schreiben Sie ein Programm, das vom Benutzer einen Buchstaben einliest und ausgibt,   *
 * der wievielte Buchstabe im Alphabet die Eingabe ist. Groß- und Kleinschreibung sollen *
 * keine Rolle spielen. Zudem soll das Programm vorher ausgeben, ob der Benutzer einen   *
 * Buchstaben eingegeben hat und die Ausgabe somit richtig ist.                          *
 *                                                                                       *
 * 1. Beispiel:                                                                          *
 * >> Geben Sie einen Buchstaben ein: B                                                  *
 * Die folgende Ausgabe ist richtig, weil das Zeichen B ein Buchstabe ist: 1             *
 * Der Buchstabe B ist der 2. Buchstabe im Alphabet.                                     *
 *                                                                                       *
 * 2. Beispiel:                                                                          *
 * >> Geben Sie einen Buchstaben ein: b                                                  *
 * Die folgende Ausgabe ist richtig, weil das Zeichen b ein Buchstabe ist: 1             *
 * Der Buchstabe b ist der 2. Buchstabe im Alphabet.                                     *
 *                                                                                       *
 * 3. Beispiel:                                                                          *
 * >> Geben Sie einen Buchstaben ein: 3                                                  *
 * Die folgende Ausgabe ist richtig, weil das Zeichen 3 ein Buchstabe ist: 0             *
 * Der Buchstabe 3 ist der -13. Buchstabe im Alphabet.                                   *
 *****************************************************************************************/

#include <stdio.h>
#include <ctype.h>

int main()
{
    char buchstabe = 0;

    printf("Gib einen Buchstaben ein: ");
    buchstabe = getchar();
    printf("Die folgende Ausgabe ist richtig, weil das Zeichen %c ein Buchstabe ist: %d\n",
           buchstabe,
           isalpha(buchstabe));
    printf("Das ist der %d. Buchstabe im Alphabet.\n", tolower(buchstabe) - 'a' + 1);

    return 0;
}