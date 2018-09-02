#include <stdio.h>
#include <stdlib.h>

int n,indice,aux;
int arr[n];

int main(){
    aux=0;
    scanf("%d", &n);
    indice=0;
    for(int i=0; i<=n; i++){
        scanf("%d", arr[i]);
    }
    for(int a=0; a<=n; a++){
        if(arr[a]>arr[a+1]){
            aux=arr[a];
            arr[a]=arr[a+1];
            arr[a+1]=arr[a];
            indice+=1;
        }else{
            indice=indice;
        }
    }
    return 0;
}
