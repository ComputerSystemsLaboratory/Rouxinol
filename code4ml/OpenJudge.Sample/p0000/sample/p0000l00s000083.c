#include <stdio.h>

int main(void){
        int i,j,k;
        int h[10];
        for(i = 0; i < 10; i++){
                scanf("%d", &h[i]);
        }
        for(i = 0; i < 10; i++){
                for(j = 0; j < 10; j++){
                        if(h[i] > h[j]){
                                k = h[i];
                                h[i] = h[j];
                                h[j] = k;
                        }
                }
        }
        for(i= 0; i < 3; i++){
                printf("%d\n", h[i]);
        }
return 0;
}