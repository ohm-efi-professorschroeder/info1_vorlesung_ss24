/*************************************************************
 * Schreiben Sie ein Programm, das zwei positive Zahlen vom  *
 * Benutzer einliest sowie einen Rechenoperator und          *
 * anschliessend das Ergebnis ausgibt. Bei falschen Eingaben *
 * soll das Programm kontrolliert beendet werden.            *
 *                                                           *
 * 1. Beispiel:                                              *
 * >> Geben Sie eine positive, ganze Zahl ein: 50            *
 * >> Geben Sie noch eine positive, ganze Zahl ein: 20       *
 * >> Geben Sie einen Rechenoperator ein (+, -, *, /): -     *
 * 50 - 20 = 30                                              *
 *                                                           *
 * 2. Beispiel:                                              *
 * >> Geben Sie eine positive, ganze Zahl ein: 50            *
 * >> Geben Sie noch eine positive, ganze Zahl ein: 20       *
 * >> Geben Sie einen Rechenoperator ein (+, -, *, /): +     *
 * 50 + 20 = 70                                              *
 *                                                           *
 * 3. Beispiel:                                              *
 * >> Geben Sie eine positive, ganze Zahl ein: -50           *
 * Falsche Eingabe!                                          *
 *                                                           *
 * 4. Beispiel:                                              *
 * >> Geben Sie eine positive, ganze Zahl ein: 50            *
 * >> Geben Sie noch eine positive, ganze Zahl ein: -20      *
 * Falsche Eingabe!                                          *
 *                                                           *
 * 5. Beispiel:                                              *
 * >> Geben Sie eine positive, ganze Zahl ein: 50            *
 * >> Geben Sie noch eine positive, ganze Zahl ein: 20       *
 * >> Geben Sie einen Rechenoperator ein (+, -, *, /): dfgfd *
 * Unbekannter Rechenoperator d                              *
 *************************************************************/

#include <stdio.h>

int main()
{
    int operand1 = 0;
    int operand2 = 0;
    char operator = 0;
    double ergebnis = 0;

    printf("Operand 1: ");
    scanf("%d", &operand1);
    getchar();
    printf("Operand 2: ");
    scanf("%d", &operand2);
    getchar();
    printf("Operator: ");
    scanf("%c", &operator);

    switch(operator) {
        case '+':
            ergebnis = operand1 + operand2;
            ergebnis *= 1;
            break;
        case '-':
            ergebnis = operand1 - operand2;
            break;
        case '*':
            ergebnis = operand1 * operand2;
            break;
        case '/':
            ergebnis = (double) operand1 / operand2;
            break;
        default:
            printf("Ungueltige Operation\n");
            return -1;
    }
    printf("Ergebnis: %lf\n", ergebnis);

    // Nebenbeispiel: bedingte Zuweisung
    int wert = ergebnis < 0 ? 1 : 0;
    // equivalent zu:
    if (ergebnis < 0)
        wert = 1;
    else
        wert = 0;

    return 0;
}