#define DigLim  1000000000
#include<stdio.h>

int main(){
    short A[100][100] = {0}, B[100][100] = {0};
    int c[2]={0};
    int n, m, l, i, j, k, t, s;
    scanf("%d %d %d", &n, &m, &l);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d", &(A[i][j]));
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<l;j++){
            scanf("%d", &(B[i][j]));
        }
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<l;j++){
            c[1] = c[0] = 0;
            for(k=0;k<m;k++){
                t = A[i][k]*B[k][j];
                if(c[0]+t>=DigLim){
                    c[0] += t - DigLim;
                    c[1]++;
                }
                else c[0]+=t;
            }
            if(c[1]>0){
                printf("%d", c[1]);
                t=c[0];
                for(s=1;t/10>0;s++)t/=10;
                for(t=0;t<9-s;t++)putchar('0');
            }
            printf("%d", c[0]);
            putchar((j<l-1)?' ':'\n');
        }
        //printf("\n");
    }
    return 0;
}
