#include<stdio.h>

int main(){
    int n,m,l;
    scanf("%d %d %d",&n,&m,&l);
    long mat1[100][100]={},mat2[100][100] = {},result[100][100] = {};
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            scanf("%ld",&mat1[i][j]);
        }
    }
    for(int i = 0;i < m;i++){
        for(int j = 0;j < l;j++){
            scanf("%ld",&mat2[i][j]);
        }
    }
    
    int x=0;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < l;j++){
            for(int k = 0;k < m;k++){
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    
    for(int i = 0;i < n;i++){
        for(int j = 0;j < l;j++){
            if(j != l-1){
                printf("%ld ",result[i][j]);
            } else{
                printf("%ld\n",result[i][j]);
            }
        }
    }
    return 0;
}
