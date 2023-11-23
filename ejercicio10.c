#include <stdio.h>

void Orden2(int *lista,int n){
	int i,j,tem;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(lista[i]>lista[j]){
				tem=lista[i];
				lista[i]=lista[j];
				lista[j]=tem;
			}
		}
	}
	printf("Lista de Negativos:\n");
	for(i=0;i<n;i++){
		printf(" %d\n ",lista[i]);
	}
}
void Orden1(int *lista, int p){
	int i,j,tem;
	for(i=0;i<p;i++){
		for(j=i+1;j<p;j++){
			if(lista[i]<lista[j]){
				tem=lista[i];
				lista[i]=lista[j];
				lista[j]=tem;
			}
		}
	}
	printf("Lista de Pares:\n");
	for(i=0;i<p;i++){
		printf("%d\n ",lista[i]);
	}
}

int main() {
	
	int num,i,positivo[8],p=0,negativo[8],n=0;
	
	for(i=0;i<8;i++){
		printf("Ingrese el valor %d: ",i+1);
		scanf("%d",&num);
		while(num==0){
			printf("Ingrese el valor distinto a 0: ");
			scanf("%d",&num);
		}
		if(num>0){
			positivo[p]=num;
			p++;
		}
		else{
			if(num<0){
				negativo[n]=num;
				n++;
			}
		}
	}
	Orden1(positivo,p);
	Orden2(negativo,n);
	return 0;
}