#include <stdio.h>

//#define MY_CONST 3.142
//
//const double myConstVar = 567.45;
//
//int main()
//{
//    const double pi = 3.142;
//
//    double ergebnis = MY_CONST * myConstVar;
//    myConstVar += 12.1; // Fehler!
//
//    return 0;
//}


#define PI_HALF 1.571
#define PI PI_HALF+PI_HALF // Fehler: Klammerung bzw. Operatorreihenfolge beachten!

int main()
{
    // Aufgabe: Welchen Wert hat die Variable twoPI nach der Zuweisung und warum? Erst nachdenken, dann ausprobieren!
    float twoPI = 2 * PI;
    printf("%f\n", twoPI);
}
