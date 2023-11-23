#include <stdio.h>

void contenido(int*num, int i)
{
	int k=0,l=1;
	for(k=0;k<i;k++){
		
		printf("El numero %d ingresado es:%d\n",l,num[k]);
		l++;
	}
	
}


int main() 
{
	int num[6];
	int j=1,i=0;
	
	for(i=0;i<6;i++)
	{
		printf("Ingrese numero %d \n",j);
		scanf("%d",&num[i]);
		j++;
	}

	contenido(num,i);
	
	
}