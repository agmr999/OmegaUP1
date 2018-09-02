#include <stdio.h>
#include <stdlib.h>
main(){
	int a,b,c,d;
	
	scanf("%i %i %i",&a,&b,&c);
	
	d= (a+b+c)/3;
	
	if(d>5){
		printf("1");
	}else{
		printf("0");
	}
}
