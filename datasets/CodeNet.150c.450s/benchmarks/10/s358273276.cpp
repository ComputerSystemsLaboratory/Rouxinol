#include<stdio.h>
int main()
{
    int n, b[512], f[512], r[512], v[512];
    int j[4][3][10] = { 0 };
    int a=0,i,m,k;

    scanf("%d",&n);
    for (i = 0; i < n; i++){
        scanf("%d%d%d%d",&b[i],&f[i],&r[i],&v[i]);
    }
    for (i = 0; i < n; i++){
        j[b[i]-1][f[i]-1][r[i]-1]+=v[i];
    }
    for (i = 0; i < 4; i++){
        if (a)printf("####################\n");
        for (m = 0; m < 3; m++){
            for (k = 0; k < 10; k++){
                printf(" %d",j[i][m][k]);
            }
            printf("\n");
            a = 1;
        }
    }
    return 0;
}