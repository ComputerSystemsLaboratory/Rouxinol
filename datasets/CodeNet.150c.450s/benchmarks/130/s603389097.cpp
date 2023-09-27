#include<stdio.h>
using namespace std;

int main(){
    int m,n;
    scanf("%d%d",&n,&m);
    int mat[100][100] = {};
    int vec[100] = {};
    int ans_vec[100] = {};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    for(int j=0;j<m;j++){
        scanf("%d",&vec[j]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ans_vec[i]+=mat[i][j]*vec[j];
        }
    }
    for(int i=0;i<n;i++){
        printf("%d\n",ans_vec[i]);
    }
}
