#include <stdio.h>
#include <math.h>
main(){
	float x,y,z;
	
	scanf("%f",&x);
	
	y=(x+5)/(2*(x+1));
	
	z=((pow(y,2))+x*(x-(2*y)))/(x*y);
	
	printf("%f",z);
}
