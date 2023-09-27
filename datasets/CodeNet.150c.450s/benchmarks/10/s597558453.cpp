#include <stdio.h>

int main(void)
{
    int dom[4][3][10]={{{0}}}, n,i,j,k,b,f,r,v;

    scanf("%d",&n);

    for(i=0;i<n;i++) {
        scanf("%d%d%d%d",&b,&f,&r,&v);
        dom[b-1][f-1][r-1] += v;
    }

    for(i=0;i<4;i++) {
        for(j=0;j<3;j++) {
            for(k=0;k<10;k++)
                printf(" %d", dom[i][j][k]);
            printf("\n");
        }
        if (i!=3)
            printf("####################\n");
    }

    return 0;
}