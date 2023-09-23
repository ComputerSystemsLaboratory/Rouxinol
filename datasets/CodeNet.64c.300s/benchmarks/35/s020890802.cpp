#include <cstdio>

int main(){
    int i, j, n, u, k, v;
    scanf("%d",&n);
    int A[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            A[i][j]=0;
        }
    }
    for(i=0;i<n;i++){
        scanf("%d %d",&u,&k);
        for(j=0;j<k;j++){
            scanf("%d",&v);
            A[u-1][v-1] = 1;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d",A[i][j]);
            if(j<n-1)printf(" ");
        }
        printf("\n");
    }
    return 0;
}

