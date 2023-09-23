#include <stdio.h>

int main(void){
    int n,cnt;
    
    while (scanf("%d", &n)!=EOF){
        cnt = 0;
        for (int i=0; i<10; i++){
            for (int j=0; j<10; j++){
                for (int k=0; k<10; k++){
                    for (int l=0; l<10; l++){
                        cnt += (i+j+k+l)==n ? 1 : 0;
                    }
                }
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}