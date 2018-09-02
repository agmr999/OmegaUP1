#include <stdio.h>

int main(int argc, char *argv[]) {
	int n,a,sp=0,si=0,i,r;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		do{
			scanf("%i",&a);
		} while(a<1||a>10000);
		if (a!=0) {
			r= a%2;
			if (r==0) {
				sp+=a;
			} else {
				si+=a;
			}
		}
	}
	if(sp==si){
		printf("EMPATE!");
	}else{
		if(sp>si){
			printf("APARICIO");
		}else{
			printf("NONILA");
		}
	}
	return 0;
}
