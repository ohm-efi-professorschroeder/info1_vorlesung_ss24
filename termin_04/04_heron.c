/****************************************************************************************************************************************************
 * Schreiben Sie ein Programm, das eine Gleitkommazahl vom Benutzer einliest und dessen Quadratwurzel approximiert, ohne math.h zu verwenden.       *
 * Lesen Sie dafür zunächst solange Eingaben ein, bis eine Zahl eingegeben wird, die mindestens 0 ist. Andere Eingaben werden verworfen.            *
 * Implementieren Sie danach den Algorithmus nach Heron. Dafür gehen wir davon aus, dass die eingegebene Zahl der Flächeninhalt eines Quadrats ist, *
 * die Seitenlänge aber unbekannt ist. Wir versuchen nun ein Rechteck mit dem angegebenen Flächeninhalt zu konstruieren und stückweise beide        *
 * Seitenlängen aneinander anzugleichen, bis ein Quadrat mit dem gewünschten Flächeninhalt entsteht.                                                *
 * Wir initialisieren die beiden unbekannten Seitenlängen mit dem halben Flächeninhalt und dem Flächeninhalt geteilt durch die erste Seitenlänge.   *
 * Wie erwartet erhalten wir kein Quadrat, sondern ein allgemeines Rechteck. Wir nähern nun die beiden Seitenlängen aneinander an, müssen aber      *
 * dafür sorgen, dass der Flächeninhalt immer gleich bleibt. Dazu halbieren wir für die erste Seitenlänge die Summe beider Seitenlängen. Für        *
 * die zweite Seitenlänge teilen wir wieder den Flächeninhalt durch die erste Seitenlänge, um                                                       *
 * Seitenlänge 1 * Seitenlänge 2 = Flächeninhalt = eingegebener Zahl                                                                                *
 * zu erhalten. Dies wiederholen wir, bis (Seitenlänge 1 - Seitenlänge 2)² <= 10^-9 ist. So konstruieren wir schrittweise ein Quadrat mit dem       *
 * eingegebenen Flächeninhalt und approximieren gleichzeitig die Quadratwurzel der eingegebenen Zahl. Am Ende geben wir das Ergebnis aus.           *
 *                                                                                                                                                  *
 * Beispiel:                                                                                                                                        *
 * >> Geben Sie eine Zahl ein: abc                                                                                                                  *
 * >> Geben Sie eine Zahl ein: -5                                                                                                                   *
 * >> Geben Sie eine Zahl ein: 5.5                                                                                                                  *
 * 2.345208 * 2.345208 = 5.500000                                                                                                                   *
 *                                                                                                                                                  *
 ****************************************************************************************************************************************************/

#include <stdio.h>

int main()
{

    return 0;
}