#include <cstdio>
#include <cstring>
#include <queue>
#define N 110
#define INF 0x3f3f3f3f
using namespace std;
//stack<int> s;
int n;
int m[N][N];
int used[N];
int d[N];
void bfs(int root){
    queue<int>q;
    while(!q.empty()) q.pop();
    q.push(root);
    d[root] = 0;
    while(!q.empty()){
        int u = q.front();
        used[u] = 1;
        q.pop();
        for(int i = 1; i <= n; i++){
            if(used[i] == 0 && m[u][i]){
                q.push(i);
                d[i] = d[u] + 1;
                used[i] = 1;
            }
        }
    }
}
int main(){
    for(int i = 0; i < N; i++) for(int j = 0; j < N; j++) m[i][j] = 0;
    for(int i = 0; i < N; i++) used[i] = 0;
    for(int i = 0; i < N; i++) d[i] = INF;
    scanf("%d", &n);
    for(int p = 0; p < n; p++){
        int node, k;
        scanf("%d %d", &node, &k);
        for(int i = 0; i < k; i++){
            int b;
            scanf("%d", &b);
            m[node][b] = 1;
        }
    }
    bfs(1);
    //for(int i = 1; i <= n; i++) if(used[i] == 0) bfs(i);
    for(int i = 1; i <= n; i++){
        printf("%d %d\n", i, d[i] == INF ? -1 : d[i]);
    }
    return 0;
}
