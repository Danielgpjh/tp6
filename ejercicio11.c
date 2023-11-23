#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void Inverso(char *cadena1, char longi,int j){
	
	char caracte;
	for (int i=0; i<longi/2; i++)
	{
		caracte=cadena1[i];
		cadena1[i]=cadena1[j];
		cadena1[j]=caracte;
		j--;
	}
	printf("Resultado: %s\n", cadena1);
}
int main()
{
	int j;
	char longi,cadena1[50];
	printf("Introduce un texto (menos de 50 caracteres): ");
	gets(cadena1);
	longi=strlen(cadena1);
	j=longi-1;
	Inverso(cadena1,longi,j);
	system("pause");
	
	return 0;
}