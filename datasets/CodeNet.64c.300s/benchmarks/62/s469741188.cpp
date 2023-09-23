#include<stdio.h>


int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int mat[n][m];
    int row[m];
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i = 0;i < m;i++){
        scanf("%d",&row[i]);
    }
    int val;
    for(int i = 0;i < n;i++){
        val = 0;
        for(int j = 0;j < m;j++){
            val += mat[i][j]*row[j];
        }
        printf("%d\n",val);
    }
    return 0;
}

