#include<stdio.h>
using namespace std;

int main(){
    int n,m,l;
    scanf("%d%d%d",&n,&m,&l);
    long long int a[100][100],b[100][100];
    long long int c[100][100]={};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<l;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<l;j++){
            for(int k=0;k<m;k++){
                c[i][j] += a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<l;j++){
            if (j<l-1){
                printf("%lld ",c[i][j]);
            }else{
                printf("%lld",c[i][j]);
            }
        }printf("\n");
    }
}

