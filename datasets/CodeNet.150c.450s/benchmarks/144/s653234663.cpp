#include <stdio.h>
int main(){
    int n,m,l;
long long temp;
    scanf("%d%d%d",&n,&m,&l);
    int a[n][m],b[m][l];
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
            temp=0;
            for(int k=0;k<m;k++){
                temp+=a[i][k]*b[k][j];
            }
            if(j==0)printf("%lld",temp);
            else printf(" %lld",temp);
        }
        printf("\n");
    }
    
}