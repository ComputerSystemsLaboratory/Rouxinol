#include<stdio.h>
#define N 100

int main(){
    int i,j,n,k,u,v,M[N+1][N+1];

    scanf("%d",&n);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            M[i][j]=0;
        }
    }

    for(i=0;i<n;i++){
        scanf("%d%d",&u,&k);
        for(j=0;j<k;j++){
            scanf("%d",&v);
            M[u-1][v-1]=1;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j!=0) printf(" ");
            printf("%d",M[i][j]);
        }
        puts("");
    }
    return 0;
}