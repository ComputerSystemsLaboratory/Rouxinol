#include<stdio.h>

int main(){
    int i, j, k;
    int n;
    int b, f, r, v;
    int p[4][3][10];
    for(i=0; i<4; i++){
        for(j=0; j<3; j++){
            for(k=0; k<10; k++){
                p[i][j][k] = 0;
            }
        }
    }
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d %d %d %d", &b, &f, &r, &v);
        p[b-1][f-1][r-1] += v;
    }
    
    for(i=0; i<4; i++){
        for(j=0; j<3; j++){
            for(k=0; k<10; k++){
                printf("% d", p[i][j][k]);
            }
            printf("\n");
        }
        if(!(i==3))printf("####################\n");
    }
    return 0;
}