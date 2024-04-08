/********************************************************************************
 * Aufgabe                                                                      *
 * Bringen Sie eine LED an Ihrem Microcontroller-Board zu leuchten!             *
 *                                                                              *
 * Hinweise: 8 LEDs sind an einem digitalen Ausgangsport angeschlossen, dessen  *
 * Zustand von der Variable ledPort bestimmt wird. Der Port hat 8 binäre        *
 * Ausgänge. Jedes Bit in der Variable entspricht einem Ausgang.                *
 * 1=Spannung bzw. "LED an", 0=keine Spannung bzw. "LED aus".                   *
 * Brinngen sie nur LED Nummer 5 zum Leuchten.                                  *
 *                                                                              *
 *          +++++++++++++++++++++++                                             *
 *          +++ Microcontroller +++  <- Ihr Microcontroller                     *
 *          +++++++++++++++++++++++                                             *
 *              | | | | | | | |      <- Der Ausgangsport                        *
 *              o o o o * o o o      <- Die LEDs. LED 5 soll leuchten (*)       *
 *                                                                              *
 ********************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LED_PORT_OFFSET Zahl /* Ersetzen Sie Zahl durch den richtigen Offset! */
char ledPort = 0; /* Der Zustand dieser Variable definiert den Zustand des Ausgangsports. */

int main()
{
    /* TODO: Schreiben Sie ihren Code hier: */


    /* Nun geben wir die Zustände der LED aus. Ignorieren Sie hier die etwas fortgeschrittene Benutzung von printf!
       Die Ausgabe sollte 00001000 sein, dann leuchtet die 5. LED!*/
    char buffer[9];
    itoa(ledPort, buffer, 2);
    printf("LEDs:\t%.*s%s\n", 8-strlen(buffer), "00000000", buffer);
    return 0;
}