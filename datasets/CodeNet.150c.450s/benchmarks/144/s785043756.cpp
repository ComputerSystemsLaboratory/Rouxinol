#include <cstdio>

int main(){
    int n,m,l;
    scanf("%d%d%d",&n,&m,&l);
    
    int a[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0;j < m;j++){
            scanf("%d", &a[i][j]);
        }
    }
    int b[m][l];
    for(int i = 0;i < m;i++){
        for(int j = 0;j < l;j++){
            scanf("%d",&b[i][j]);
        }
    }
    long c[n][l];
    
    for(int i = 0;i < n;i++){
        for(int k = 0;k < l;k++){
            c[i][k] = 0;
            for(int j = 0;j < m;j++){
                c[i][k] +=  a[i][j] * b[j][k];
            }
            if(k < l - 1){
                printf("%ld ",c[i][k]);
                }
            else if(k == l - 1){
                printf("%ld\n",c[i][l - 1]);
            }
        }
       
    }
    return 0;
}
