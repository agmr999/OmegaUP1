#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	int i,f,a=0;
	char s[50];
	char ss[50];
	scanf("%d %d",&i,&f);
	fflush(stdin);
	scanf("%[^\n]",&s[a]);
	strcpy(ss,s);
	for(int j=f;j>=i;j--){
		ss[a]=s[j];
		a=a+1;
	}

		printf("%s",ss);
	
	return 0;
}

