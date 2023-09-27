#include <cstdio>

#define N 100
int main(){
    int a[N+1][N+1] = {};

    int n;
    std::scanf("%d", &n);

    for(int i = 1; i <= n; ++i){
        int id;
        std::scanf("%d", &id);
        int m;
        std::scanf("%d", &m);
        for(int j = 1; j <= m; ++j){
            int x;
            std::scanf("%d", &x);
            a[id][x] = 1;
        }
    }
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j){
            std::printf("%d", a[i][j]);
            if(j != n) std::printf(" ");
            else std::printf("\n");
        }
    }

    return 0;
}

