#include <stdio.h>

int main(int argc, char *argv[]) {
int n;
scanf("%d",&n);
int m[n];
for(int i=0;i<n;i++){
	scanf("%d",&m[i]);
}
for(int i=0;i<n;i++){
	if(((m[i])%5==0)&&((m[i])%3==0)){
		printf("FizzBozz\n");	
	}
	else if((m[i])%3==0){
		printf("Fizz\n");	
	}
	else if((m[i])%5==0){
		printf("Bozz\n");	
}
	else{
		printf("NoFizzBozz\n");
	}
}
	return 0;
}
