#include <stdio.h>
 
int main(void)
{
    int i, j, k;
    int n, m, l;
    int a[100][100]={};
    int b[100][100]={};
    long long int c[100][100]={};
     
    scanf("%d%d%d", &n, &m, &l);
     
    for(i=0; i<n; i++) {
        for(k=0; k<m; k++)
            scanf("%d", &a[i][k]);
    }
    for(k=0; k<m; k++) {
        for(j=0; j<l; j++)
            scanf("%d", &b[k][j]);
    }
     
    for(i=0; i<n; i++) {
        for(j=0; j<l; j++) {
            for(k=0; k<m; k++)
                c[i][j]+=a[i][k]*b[k][j];
        }
    }
     
    for(i=0; i<n; i++) {
        for(j=0; j<l; j++) {
            printf("%lld", c[i][j]);
            if(j!=l-1) putchar(' ');
        }
        putchar('\n');
    }
     
    return 0;
}

