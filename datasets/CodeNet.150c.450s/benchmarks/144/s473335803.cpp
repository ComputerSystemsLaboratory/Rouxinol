#include <stdio.h>

int main(){
    int n,m,l;
    int a[100][100],b[100][100];
    long cij;
    int i,j,k;
    scanf("%d %d %d",&n,&m,&l);
    for(i=0;i<n;i++)for(j=0;j<m;j++)scanf("%d",&a[i][j]);
    for(i=0;i<m;i++)for(j=0;j<l;j++)scanf("%d",&b[i][j]);
    for(i=0;i<n;i++)for(j=0;j<l;j++){
        cij = 0;
        for(k=0;k<m;k++)cij += a[i][k]*b[k][j];
        printf("%ld",cij);
        printf(j==l-1 ? "\n" : " ");
    }
}