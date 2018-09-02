#include <stdio.h>

int main(int argc, char *argv[]) {
	int a,i,b,sum,aux=0,j;
	scanf("%d %d",&a,&b);
	int arreglo[a];
	for(i=0;i<a;i++){
		scanf("%d",&arreglo[i]);
	}
	for(i=0;i<a-b;i++){
		sum=0;
		for(j=0;j<b;j++){
			sum+=arreglo[i+j];
		}
		if(sum>aux){
			aux=sum;
		}
	}
	printf("%d",aux);
	return 0;
}

