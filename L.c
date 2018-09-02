#include <stdio.h>
int main(int argc, char *argv[]) {
	int a,b,c,d,horas,minutos;
	scanf("%d" "%d" "%d" "%d",&a,&b,&c,&d);
	if(a>c){
		if(b==0){
			horas=(24-a)+c;
			printf("%d\n",horas);
			printf("0");
		}else{
			if(d>b){
				horas=(24-a)+c;
				printf("%d\n",horas);
				minutos=d-b;
				printf("%d",minutos);
			}
			else{
				horas=((24-a)+c)-1;
				printf("%d\n",horas);
				minutos=(60-b)+d;
				printf("%d",minutos);
			}
		}
		
	}else{
		if(d==0){
			horas=c-a;
			printf("%d\n",horas);
			printf("0");
		}
		else{
			if(d>b){
				horas=c-a;
				printf("%d\n",horas);
				minutos=d-b;
				printf("%d",minutos);
			}
			else{
				horas=(c-a)-1;
				printf("%d\n",horas);
				minutos=(60-b)+d;
				printf("%d",minutos);
			}
		}
		
	}
	return 0;
}
