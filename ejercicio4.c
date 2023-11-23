#include <stdio.h>

void secuencia(int cont1, int cont2, int num2, int num3) 
{
	if(cont1>0)
	{
		
		printf("El numero %d se encuentra dentro de la secuencia\n",num2);
		printf("La cantidad de veces que se repite el numero %d son:%d\n",num2,cont1);
		
		
		if(cont2>0)
		{
			printf("\n\nEl numero %d se encuentra dentro de la secuencia\n",num3);
			printf("La cantidad de veces que se repite el numero %d son:%d\n",num3,cont2);
			
		}
	}
	else
	{
		printf("Ninguno de los numeros ingresados esta dentro de la secuencia\n");
		
	}
}

int main() 
{
	
	int num1[8];
	int num2,num3,i,j=1,cont1=0,cont2=0,k=0,posicion=0,posicion2=0;
	for(i=0;i<8;i++)
	{
	 printf("Ingresar el numero %d (posicion %d)\n",j,i);
	 scanf("%d",&num1[i]);
	 j++;
	}
	printf("------------------\n");
	printf("Ingrese otro numero\n");
	scanf("%d",&num2);
	printf("Ingrese un tercer numero\n");
	scanf("%d",&num3);
	for(k=0;k<i;k++)
	{
		if(num2==num1[k])
		{
			cont1=cont1+1;
			posicion=k;
			printf("El numero %d Se ubica en la posicion %d\n",num2,posicion);
			
		}
		if(num3==num1[k])
		{
			cont2=cont2+1;
			posicion2=k;
			printf("El numero %d Se ubica en la posicion %d\n",num3,posicion2);
		}
	}
	printf("-------------------\n");
	secuencia( cont1, cont2, num2, num3); 
	
	return 0;
}