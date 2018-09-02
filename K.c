#include <stdio.h>
#include <stdlib.h>
main(){
	int a,b,c;
	scanf("%i %i %i",&a,&b,&c);
	
	if((a+b+c)==180 && a>0 && b>0 && c>0){
		if(a==b && b==c){
			printf("EQUILATERO");
		}else if((a==b && a!=c) || (b==c && b!=a)){
			printf("ISOCELES");
		}else{
			printf("ESCALENO");
		}
	}else{
		printf("ERROR");
	}
}
