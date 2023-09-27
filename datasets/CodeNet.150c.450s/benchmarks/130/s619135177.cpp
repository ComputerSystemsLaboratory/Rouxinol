#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d",&n,&m);
    int a[n+1][m+1];
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            scanf("%d",&a[i][j]);
        }
    }
    int b[m+1];
    for(int i = 1; i<=m; i++){
        scanf("%d",&b[i]);
    }
    int c[n+1];
    for(int i = 1; i<=n; i++){
        int sum = 0;
        for(int j = 1; j<=m; j++){
            sum+=(a[i][j]*b[j]);       
        }
        c[i] = sum;
    }
    for(int i = 1; i<=n; i++){
        printf("%d\n",c[i]);
    }
    return 0;
}

