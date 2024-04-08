
#include <stdio.h>

int main()
{
    int wert = -5;
    unsigned int istZwischen0und255 = 0;
    unsigned int istGerade = 0;
    int malMinusEins = 0;
    int malAcht = 0;

    // Todo: Pruefen Sie nur mit Bitoperatoren und dem !-Operator, ob in der Variable wert ein Wert im Interval [0; 255] gespeichert ist.
    istZwischen0und255 = !(wert >> 8); // Hier Ausdruck anstelle von 0 einfuegen.
    // oder:
    istZwischen0und255 = !(wert & 0xff); // bitmaske 0xff

    printf("Liegt die Variable wert im Intervall [0; 255]? %u\n", istZwischen0und255);

    // Todo: Pruefen Sie nur mit Bitoperatoren, ob in der Variable wert ein gerader Wert gespeichert ist.
    istGerade = 0; // Hier Ausdruck anstelle von 0 einfuegen.

    printf("Ist der Wert der Variablen wert gerade? %u\n", istGerade!=0);

    // Todo: Rechnen Sie den in der Variablen wert gespeicherten Wert mal -1 und verwenden Sie dabei nur Bitoperatoren und den +-Operator.
    malMinusEins = 0; // Hier Ausdruck anstelle von 0 einfuegen.

    printf("%d * -1 = %d\n", wert, malMinusEins);

    // Todo: Rechnen Sie den in der Variablen wert gespeicherten Wert mal 8 und verwenden Sie dabei keine arithmetischen Operatoren.
    malAcht = 0; // Hier Ausdruck anstelle von 0 einfuegen.

    printf("%d * 8 = %d\n", wert, malAcht);

    return 0;
}