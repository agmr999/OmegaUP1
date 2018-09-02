#include <stdio.h>
#include <stdlib.h>

int main() {
	int a,b,c;
	scanf("%i %i %i",&a,&b,&c);
	if(a>b){
		if(a>c){
			printf("El numero mayor es %i",a);	
		}
		else{
			printf("El numero mayor es %i",c);	
		}
	}
	else if(b>c){
		printf("El numero mayor es %i",b);		
	}
	else{
		printf("El numero mayor es %i",c);	
	}
	return 0;
}
