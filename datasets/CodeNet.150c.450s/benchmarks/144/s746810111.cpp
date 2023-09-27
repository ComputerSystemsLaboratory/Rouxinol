#include <stdio.h>

int main(void)
{
    int a[100][100],b[100][100];
    long c[100][100]={{0}};
    int n,m,l,i,j,k;

    scanf("%d%d%d",&n,&m,&l);

    for(i=0;i<n;i++) {
        for(j=0;j<m;j++)
            scanf("%d", &a[i][j]);
    }

    for(i=0;i<m;i++) {
        for(j=0;j<l;j++)
            scanf("%d",&b[i][j]);
    }
    
    for(i=0;i<n;i++) {
        for(j=0;j<l;j++) {
            for(k=0;k<m;k++)
                c[i][j]+=a[i][k]*b[k][j];   
        }
    }
    
    for(i=0;i<n;i++) {
        for(j=0;j<l-1;j++)
            printf("%ld ", c[i][j]);
        printf("%ld\n",c[i][l-1]);
    }
    return 0;
}