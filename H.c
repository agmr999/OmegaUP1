#include <stdio.h>
#include <math.h>
int main(){
	int a,b=0;
	scanf("%i",&a);
	if(a%2==0){
		a=a/2;
		b+=1;
	}else{
		a+=1;
		b+=1;
	}
	if(a>99){
		a=a/100;
		b+=1;
	}else if(a>9){
		a=a/10;
		b+=1;
	}
	if(a%3==0){
		a=a-1;
		b+=1;
	}
	printf("%i %i",a,b);
}
