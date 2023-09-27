#include <cstdio>

#define N 100

int check(int id, int distance, int a[N + 1][N], int count[N], int d[N]){
    if(d[id] != -1 && distance >= d[id]) return d[id];
    d[id] = distance;
    for(int i = 0; i < count[id]; ++i){
        check(a[id][i], distance + 1, a, count, d);
    }
    return d[id];
}

int main(){
    int n;
    std::scanf("%d", &n);

    int a[N + 1][N];
    int d[N + 1];
    int count[N + 1];
    for(int i = 1; i <= n; ++i){
        int id;
        std::scanf("%d", &id);
        std::scanf("%d", &count[id]);
        for(int j = 0; j < count[id]; ++j){
            std::scanf("%d", &a[id][j]);
        }
        d[id] = -1;
    }

    check(1, 0, a, count, d);

    for(int i = 1; i <= n; ++i){
        std::printf("%d %d\n", i, d[i]);
    }

    return 0;
}

