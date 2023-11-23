/*Crear un programa que invierta las letras de un texto, es decir, si son mayúsculas
	muestra minúsculas. ¡Cuidado con los espacios y signos de puntuación!*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void invertir(char cadena[20],char longi,int i){
	
	printf ("su cambio es este %s", cadena);
	
}

int main (){
	
	int i=0;
	char cadena [20], longi;
	
	printf ("ingrese una palabra ");
	gets(cadena);
	longi=strlen(cadena);
	
	for (i=0; i<longi;i++){
		if(cadena[i] >= 'a' && cadena[i] <= 'z') {
			cadena[i] = toupper (cadena[i]);
		}
		else if(cadena[i] >= 'A' && cadena[i] <= 'Z') {
			cadena[i] = tolower(cadena[i]);
		}
		else
				printf ("\n No es una letra ");
	}
	
	invertir(cadena,longi,i);
	
	return 0;
}
