/*
AizuOJ ALDS1_11_C

???;BFS;????´¢;?????????;?¨????
*/
#include <queue>
#include <cstring>
#include <cstdio>
using namespace std;

const int MAXN=110, MAXM=110*110, INF=0x3f3f3f3f;
int n;
int adj[MAXN]; // 1 .. n
int to[MAXM], enext[MAXM]; // 1 .. m
int d[MAXN];

int s, v;
void bfs(int start) {
    queue<int> q;
    q.push(start);
    while (!q.empty()) {
        s=q.front();
        q.pop();
        for (int e=adj[s]; e!=0; e=enext[e]) {
            v=to[e];
            if (d[v]>d[s]+1) {
                d[v]=d[s]+1;
                q.push(v); // ?????????????????? !visited
            }
        }
    }
}

void add_edge(int no, int u, int v) {
    to[no]=v;
    enext[no]=adj[u];
    adj[u]=no;
}

int m=0, k, tmp;
//int v;
int main() {
    memset(d, INF, sizeof(d));
    d[1]=0;
    scanf("%d", &n);
    for (int u=1; u<=n; u++) {
        scanf("%d%d", &tmp, &k);
        while (k--) {
            scanf("%d", &v);
            add_edge(++m, u, v);
        }
    }
    bfs(1);
    for (int u=1; u<=n; u++) {
        printf("%d %d\n", u, d[u]==INF ? -1 : d[u]);
    }
    return 0;
}