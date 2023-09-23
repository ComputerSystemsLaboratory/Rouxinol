#include <cstdio>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            arr[i][j] = 0;
        }
    }
    for(int i = 0; i < n; i++){
        int u,k;
        scanf("%d %d",&u,&k);
        for(int j = 0; j < k; j++){
            int v;
            scanf("%d",&v);
            arr[u-1][v-1] = 1;
        }
    }
    for(int row = 0; row < n; row++){
        for(int column = 0; column < n; column++){
            printf("%d",arr[row][column]);
            if(column != n-1){
                printf(" ");
            }
        }
        printf("\n");
    }
}