
#include <stdio.h>

int main(){
    int h[10];
    int a;
    for (int i=0; i<10; i++) {
        scanf("%d",&h[i]);
    }
    for (int j=0; j<3; j++) {
        for (int k=j+1; k<10; k++) {
            if (h[j]<h[k]) {
                a=h[k];
                h[k]=h[j];
                h[j]=a;
            }
        }
    }
    for(int l=0; l<3; l++){
        printf("%d\n",h[l]);
    }
    
    return 0;
}