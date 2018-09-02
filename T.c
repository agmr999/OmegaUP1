#include <stdio.h>

int main(int argc, char *argv[]) {
int n,m,s=0;
scanf("%d %d",&n,&m);
for(int i=n;i<=m;i++){
	for(int j=n;j<=(m/2);j++){
		for(int k=n;k<=m;k++){
			if(((i*i)+(j*j))==(k*k)){
			s+=1;	
			}
		}	
	}	
}
printf("%d",s);
	return 0;
}
