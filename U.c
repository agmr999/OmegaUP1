#include <stdio.h>
#include <stdlib.h>

int * chapa;
int * llave;

void resizeChapa(int size) {
    chapa = (int *) malloc(size);
}

void resizeLlave(int size) {
    llave = (int *) malloc(size);
}

int main(){
    int m,n,aux,aux2=0;
    scanf("%d", &m);
    resizeChapa(m);
    for(int i=1; i<=m; i++){
        scanf("%d[^ ]", &chapa[i]);
    }
    scanf("%d", &n);
    resizeLlave(n);
    for(int a=1; a<=n; a++){
        aux2=0;
        scanf("%d[^ ]", &llave[a]);
        for(int b=1; b<=m; b++){
            if(llave[a]!=chapa[b]){
                aux=0;
            }else{
                aux2+=1;
                printf("%d", b);
            }
        }
        if(aux2==0){
        printf("%d", aux);
        }
    }
    return 0;
}
