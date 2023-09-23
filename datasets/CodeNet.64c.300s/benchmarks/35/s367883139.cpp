#include <stdio.h>

int main(){
    int Map[101][101];
    int N, u, k, temp;
    scanf("%d\n",&N);
    for (int ix = 0; ix < N; ix++)
        for (int jx = 0; jx < N; jx++)
            Map[ix][jx] = 0;
    for (int ix = 0; ix < N; ix++){
        scanf("%d %d",&u,&k);
        for (int kx = 0; kx < k; kx++){
            scanf("%d",&temp);
            Map[u-1][temp-1] = 1;
        }
    }
    for (int ix = 0; ix < N; ix++)
        for (int jx = 0; jx < N; jx++){
            if (jx == N-1) printf("%d\n",Map[ix][jx]);
            else printf("%d ",Map[ix][jx]);
        }
    return 0;
}
