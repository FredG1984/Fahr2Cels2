
//---------------------------------------------------------
// Datei: Fahr2Cels.c
//
// Autor: "2164080, Fred Ofori Gambrah" 
//
// Beschreibung: Dieses Programm soll Fahrenheit in Celsius umwandel
//               
//               
//
// History
// Datum        Entwickler      Beschreibung
// 2015-03-26   SPRB            Rückgabewert von scanf verstehen
//---------------------------------------------------------


#include <stdio.h>
#include <stdlib.h>
#include "header.h"


void HilfeText(void);

int main(void)
{
	float fltFahrenheit;						// Deklaration der Variable
	//float *PIO_ptrZahl = &fltFahrenheit;		// Zeiger wird initialisiert
	float *ptrFahrenheit = &fltFahrenheit;
	float fltCelsius;


	HilfeText();
	
	
	//EingabeFlt(PIO_ptrZahl);
	EingabeFlt(ptrFahrenheit);
	
	fltCelsius = Fahrenheit2Celsius(fltFahrenheit);
	printf("Das entspricht %6.2f Grad Celsius.\n\n",fltCelsius);



	return EXIT_SUCCESS;



}

void HilfeText(void)
{
	printf(">Fahr2Cels.exe");

	printf("\n                                                                                                                     HilfeText() \n");
	printf("\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB" );
	printf("\n\xBA  Dieses Programm wandelt Temperaturwerte von \xBA\n");
	printf("\xBA  Grad Fahrenheit -> Grad Celsius.            \xBA\n");
	printf("\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC" );
} 