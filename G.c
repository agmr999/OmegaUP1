#include <stdio.h>
#include <math.h>

int main(){
	int a,b,a1,aa=0,bb=0,r=0;
	scanf("%i %i", &a,&b);
	while((bb!=20)&&(r!=1)){
		a1=a;
		while((aa!=20)&&(r!=1)){
			if(b==a1){
				r=1;	
			}
			a1=a1*2;
			aa+=1;
		}
		b=b*2;
		bb+=1;
		aa=0;
	}
	if(r!=1){
		printf("tristemil");
	}else{
		printf("felizmil");
	}
	return 0;
}
