/********************************************************************************************
 * If-Else Grab
 ********************************************************************************************/

#include <stdio.h>

int main()
{
    int status = 201;
    int fehler = 0;
    int warnung = 1;
    int aktion = 1;

    /********************************************************************************************
     * Aufgabe: Schauen Sie sich folgende if/else Konstruktion an.
     * a) Ist diese Ihrer Meinung nach gut lesbar?
     * b) Identifizieren Sie Pfade, die überflüssig sind bzw. niemals ausgeführt werden.
     * c) Vereinfachen Sie den Code unter Verwendung von so wenigen Verzweigungsebenen wie
     *    möglich, ohne die Ausgabe bzw. das Verhalten des Programms zu verändern
     ********************************************************************************************/

    if (status == 200)
    {
        if (fehler)
        {
            printf("Fehler");
            return -1;
        }

        if (aktion == 1)
        {
            if (!fehler)
            {
                if (!warnung)
                {
                    printf("Aktion 1 erfolgreich ausgeführt.");
                }
                else if (warnung)
                {
                    printf("Aktion 1 mit Warnung ausgeführt.");
                    
                    if(status != 200)
                    {
                        printf("Ungültiger Status!");
                    }
                }
            }
            else
            {
                printf("Fehler");
                return -1;
            }
        }
        else if (aktion == 2)
        {
            if (!fehler)
            {
                printf("Aktion 2 erfolgreich ausgeführt.");
            }
        }
        else
        {
            printf("Unbekannte Aktion");
        }

    }
    else if (status != 200)
    {
        if (fehler)
        {
            printf("Fehler");
            return -1;
        }
    }

    return 0;
}