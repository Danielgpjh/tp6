#include <stdio.h>

void Orden(int *lista){
	int i,j,tem;
	for(i=0;i<8;i++){
		for(j=i+1;j<8;j++){
			if(lista[i]<lista[j]){
				tem=lista[i];
				lista[i]=lista[j];
				lista[j]=tem;
			}
		}
	}
	for(i=0;i<8;i++){
		printf("-%d\n ",lista[i]);
	}
}
int main() {
	
	int lista[8],i;
	for(i=0;i<8;i++){
		printf("Ingrese el valor %d: ",i+1);
		scanf("%d",&lista[i]);
		while(lista[i]<=0){
			printf("Ingrese el valor positivo: ");
			scanf("%d",&lista[i]);
		}
	}
	Orden(lista);
	return 0;
}