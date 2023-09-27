#include<iostream>
#include<queue>
#include<vector>
using namespace std;
const int N = 100005, M = 500005;
const int Inf = 0x3f3f3f3f;
int End[M], Last[M], Next[M], Path[N], dis[N];
bool Vis[N];
struct P{
    int x, step;
};
queue<P> Q;

void add_edge(int &cnt, int x, int y) {
    ++cnt;
    End[cnt] = y, Next[cnt] = Last[x], Last[x] = cnt;
}

int main() {
    int cnt = 0, n, m, a, b;
    scanf("%d%d",&n,&m);
    for(int i = 1; i <= m; ++i) {
        scanf("%d%d",&a,&b);
        add_edge(cnt,a,b);
        add_edge(cnt,b,a);
    }
    for(int i = 1; i <= n; ++i) Path[i] = -1, dis[i] = Inf;
    P u, v;
    u.x = 1, u.step = 0, Q.push(u);
    while(!Q.empty()) {
        u = Q.front(), Q.pop();

        for(int t = Last[u.x]; t; t = Next[t]) {
            v.x = End[t];
            v.step = u.step + 1;
            if(!Vis[v.x] && v.step < dis[v.x]) {
                Vis[v.x] = true;
                dis[v.x] = v.step;
                Path[v.x] = u.x;
                Q.push(v);
            }
        }
    }

    bool Can = true;
    for(int i = 1; i <= n; ++i)
        if(Path[i] == -1) Can = false;
    
    if(Can) {
        printf("Yes\n");
        for(int i = 2; i <= n; ++i)
            printf("%d\n",Path[i]);
    } else {
        printf("No\n");
    }
return 0;
}