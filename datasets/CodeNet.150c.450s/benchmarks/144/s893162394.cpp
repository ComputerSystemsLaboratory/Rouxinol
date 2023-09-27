#include<cstdio>
using namespace std;
int main(){
    int n,m,l;
    scanf("%d %d %d",&n,&m,&l);
    int A[n][m],B[m][l];
    long long int C[n][l];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf(" %d",&A[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<l;j++){
            scanf(" %d",&B[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<l;j++){
            long long int sum=0;
            for(int k=0;k<m;k++){
                sum+=A[i][k]*B[k][j];
            }
            C[i][j]=sum;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<l;j++){
           printf("%lld",C[i][j]);
           if(j!=l-1){
               printf(" ");
           }
        }
        printf("\n");
    }
    
}

