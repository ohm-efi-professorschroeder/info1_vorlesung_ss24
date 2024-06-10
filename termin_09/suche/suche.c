// TODO: Beginn

#include <stdlib.h>
#include "suche.h"

int *binsucheZgr(int suchElem, int *startZgr, int *endZgr)
{
    // TODO
}

int *binsuche(int suchElem, int array[], int anzahl)
{
    return binsucheZgr(suchElem, array, array + anzahl - 1);
}
