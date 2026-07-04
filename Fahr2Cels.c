

#include <stdio.h>
#include <stdlib.h>
//#include "header.h"

void EingabeFlt (float *PIO_ptrZahl)
{

	
	int intRueckgabe = -1;
	

	printf("\nBitte geben Sie eine Flie\xE1kommazahl ein: ");
	do
	{
		//if (-1 != intRueckgabe) das gleich in grün 
		if (0 == intRueckgabe)
		{
			printf("\nFehler! Bitte Eingabe wiederholen: ");
		}
		
		// Tastaturpuffer löschen.
		fflush(stdin);
		// Wert einlesen
		intRueckgabe = scanf("%f", PIO_ptrZahl);

		
	} while (1 != intRueckgabe);

	

}

float Fahrenheit2Celsius (float fltFahrenheit)
{
	float fltergebnis;
	
	

	fltergebnis= 5.0f/9.0f*(fltFahrenheit-32.0f);
	
	

 return fltergebnis;
}

