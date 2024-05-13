/********************************************************************************************
 * Das folgende Programm liest eine Folge aus vier ganzen Zahlen sowie eine Anzahl n
 * ein und und soll die Zahlenfolge n mal rotieren. Dabei soll die Zahlenfolge nach jeder
 * Rotation ausgegeben werden. 
 * 
 * Implementieren Sie die Rotation, in dem Sie die Variablen geschickt tauschen. 
 * 1) Überlegen Sie, wie Sie durch Tauschen eine Zahlenfolge rotieren könnten.
 * 2) Implementieren Sie eine geeignete Funktion, die zwei Variablen mittels call-by-reference
 *    tauscht.
 * 3) Nutzen Sie diese Funktion, um die vier Variablen n mal zu rotieren.
 * 
 * Beispiel:
 * >> Geben Sie vier ganze Zahlen ein (getrennt durch Kommata): 1, 2, 3, 4
 * >> Wie oft soll rotiert werden? 10
 * Vor der Rotation: 1, 2, 3, 4.
 * Nach der 1. Rotation: 4, 1, 2, 3
 * Nach der 2. Rotation: 3, 4, 1, 2
 * Nach der 3. Rotation: 2, 3, 4, 1
 * Nach der 4. Rotation: 1, 2, 3, 4
 * Nach der 5. Rotation: 4, 1, 2, 3
 * Nach der 6. Rotation: 3, 4, 1, 2
 * Nach der 7. Rotation: 2, 3, 4, 1
 * Nach der 8. Rotation: 1, 2, 3, 4
 * Nach der 9. Rotation: 4, 1, 2, 3
 * Nach der 10. Rotation: 3, 4, 1, 2
 * 
 ********************************************************************************************/

#include <stdio.h>

// Funktion tauscht Werte, auf die pos1 und pos2 zeigen
void tausche(int* pos1, int* pos2)
{
    int temp = *pos1;
    *pos1 = *pos2;
    *pos2 = temp;
}

int main() 
{
    int a, b, c, d, n = 0;

    printf("Geben Sie vier ganze Zahlen ein (getrennt durch Kommata): ");
    if (scanf("%d, %d, %d, %d", &a, &b, &c, &d) != 4)
    {
        printf("Fehlerhafte Eingabe!\n");
        return -1;
    }

    while(getchar() != '\n');
    printf("Wie oft soll rotiert werden? ");
    if(scanf("%d", &n) != 1 || n < 0)
    {
        printf("Fehlerhafte Eingabe!\n");
        return -1;
    }
    
    printf("Vor der Rotation: %d, %d, %d, %d.\n", a, b, c, d);


    for(int i = 1; i <= n; i += 1) {
        tausche(&a, &b);
        tausche(&a, &d);
        tausche(&c, &d);
        printf("Nach der %d. Rotation: %d, %d, %d, %d\n", i, a, b, c, d);
    }
                                                                 
    return 0;
}