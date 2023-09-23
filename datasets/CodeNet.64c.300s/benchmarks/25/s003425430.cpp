#include<stdio.h>

int main(){
    /*    int m[10];
    int i,j,k;

    for(i = 0; i < 10; i++){
        scanf("%d",&m[i]);
    }

    for(j = 0; j < 9; j++){
        for(k = 0; k < 9-j; k++){
            if(m[k] < m[k+1]){
                int num = m[k+1];
                m[k+1] = m[k];
                m[k] = num;
            }
        }
    }

    for(i = 0; i < 3; i++){
        printf("%d\n",m[i]);
    }
    */

    while(1){

        int x[4],y[4];
        int i,j;
        int hit = 0,blow = 0;
        int res = scanf("%d%d%d%d",&x[0],&x[1],&x[2],&x[3]);
        if(res==EOF) break;

        for(i = 0; i < 4; i++){
            scanf("%d", &y[i]);
        }

        for(i = 0; i < 4; i++){
            if(x[i] == y[i]){
                hit++;
            }
        }
        for(i = 0; i < 4; i++){
            for(j = 0; j < 4; j++){
                if(x[i] == y[j] && i != j){
                    blow++;
                }
            }
        }

        printf("%d %d\n",hit,blow);
    }
    return 0;
}