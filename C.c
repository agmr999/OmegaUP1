#include <stdio.h>
#include <stdlib.h>

int main() {
	int a,b,c,x,y,z,pp;
	scanf("%i %i %i %i %i %i",&a,&b,&c,&x,&y,&z);
	if((a*b*c)<(x*y*z)){
		pp=1;
		printf("%d",pp);
	}else{
		pp=0;
		printf("%d",pp);
	}
	return 0;
}
