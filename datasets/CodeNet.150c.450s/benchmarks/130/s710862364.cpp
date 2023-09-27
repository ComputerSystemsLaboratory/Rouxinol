#include <cstdio>

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    
    int a[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0;j < m;j++){
            scanf("%d", &a[i][j]);
        }
    }
    int b[m];
    for(int j = 0;j < m;j++){
        scanf("%d",&b[j]);
    }
    int c[n];
    
    for(int i = 0;i < n;i++){
        c[i] = 0;
        for(int j = 0;j < m;j++){
           c[i] +=  a[i][j] * b[j];
        }
        printf("%d\n",c[i]);
    }
    return 0;
}
