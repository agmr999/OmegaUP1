#include <stdio.h>

int main(int argc, char *argv[]) {
	int n,t=0,au=0,s=0;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d[^ ]",&a[i]);
	}
	for(int i=0;i<n;i++){
		if(t<(a[i])){
			t=a[i];
		}
	}
	while(au!=n){
		s=s+t;
		au=0;
		for(int i=0;i<n;i++){
			if((s%(a[i]))==0){
				au+=1;
			}
			else{
				i=n;
			}
		}
	}
	printf("%d",s);
	
	return 0;
}
