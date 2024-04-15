#include <stdio.h>

/***************************************************************************************************************************************
* Schreiben Sie ein Programm, das einen Winkel in Grad als ganze Zahl einliest und diesen in rad (als Fliesskommazahl) wieder ausgibt. *
* Nutzen Sie dabei sinnvoll mindestens eine Makro-Konstante. Der Winkel in rad soll dabei mit drei Nachkommastellen ausgegeben werden. *
****************************************************************************************************************************************/

#include "mymath.h"

int main()
{
    int grad = 0;
    double rad = 0.;

    printf("Gib einen Winkel in Grad als ganze Zahl ein: ");
    scanf("%d", &grad);

    rad = grad * DEG_TO_RAD;

    printf("Der Winkel %d Grad in Rad ist: %.3lf\n", grad, rad);

    return 0;
}