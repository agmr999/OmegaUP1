#include <stdio.h>

int main(int argc, char *argv[]) {
	int n,t=0,au=0,s;
	scanf("%d",&n);
	int a[n];
	if(n%2==0){
		t=n/2;
	}else{
		t=(n/2)+1;
	}
	s=n;
	for(int i=0;i<n;i++){
		scanf("%d[^ ]",&a[i]);
	}
	for(int i=0;i<t;i++){
		s-=1;
		if(a[i]==a[s]){
			au+=1;
		}
	}
	if(au==t){
		printf("SI");
	}
	else{
		printf("NO");
	}
	return 0;
