#include <bits/stdc++.h>
using namespace std;
typedef struct{
    int from, to, cost;
}Edge;
const int INF = 0x3f3f3f3f;

int main(){
    int n, k, s;
    scanf("%d %d %d", &n, &k, &s);
    Edge e[k];
    int d[n];
    for(int i = 0 ; i < k; i++)
        scanf("%d %d %d", &e[i].from, &e[i].to, &e[i].cost);
    for(int i = 0; i < n; i++) d[i] = (i == s) ? 0 : INF;

    int cnt;
    for(cnt = 0 ; cnt < n; cnt++) {
        int update = 0;
        for (int i = 0; i < k; i++) {
            if (d[e[i].from] != INF && d[e[i].from] + e[i].cost < d[e[i].to]) {
                d[e[i].to] = d[e[i].from] + e[i].cost;
                update = 1;
            }
        }
        if (!update) break;
    }
    int flag = 0;
    if(cnt == n) flag = 1;
    if(flag){
        printf("NEGATIVE CYCLE\n");
    }else{
        for(int i = 0; i < n; i++){
            d[i] == INF ? printf("INF\n") : printf("%d\n", d[i]);
        }
    }
    return 0;
}
