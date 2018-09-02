#include <stdio.h>

int main(int argc, char *argv[]) {
int n,t,s=0,i;
scanf("%d",&n);
getchar();
scanf("%d",&t);
getchar();
int m[t];
for(i=0;i<t;i++){
	scanf("%d[^ ]",&m[i]);
}
for(i=0;i<t;i++){
	if(i==4){
		if((m[i]+m[0])%3==0){
			s+=1;
		}	
	}
	else{
	if((m[i]+m[i+1])%3==0){
	s+=1;
	}
	}
}
printf("%d",s);
	return 0;
}
