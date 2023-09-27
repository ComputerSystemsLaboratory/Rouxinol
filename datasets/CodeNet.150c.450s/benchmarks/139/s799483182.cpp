#include "bits/stdc++.h"

using namespace std;

#define endl            "\n"
#define sz(x)          (int) (x.size())
#define all(v)          v.begin(), v.end()
#define isOdd(n)       (n&1)
#define pow(n, m)      (ll)powl(n, m)
#define clr(x, val)     memset(x, val, sizeof(x))

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<int> vi;

const int N = 1e5 + 2, M = 4e5 + 5;

int ne, head[N], nxt[M], to[M];

void initGraph(int n){
    memset(head, -1, n * sizeof(head[0]));
    ne = 0;
}
void addEdge(int f, int t){
    to[ne] = t;
    nxt[ne] = head[f];
    head[f] = ne++;
}

void addBidirectedEdge(int u, int v){
    addEdge(u, v);
    addEdge(v, u);
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int n, m; cin >> n >> m;
    initGraph(n);
    while(m--){
        int u, v; cin >> u >> v;
        u--, v--;
        addBidirectedEdge(u, v);
    }

    int dis[N] = {}, par[N];
    clr(dis, -1);

    queue<int> q;
    q.push(0);
    dis[0] = 0;
    while(q.size()){
        int u = q.front(); q.pop();
        for(int k = head[u]; ~k; k = nxt[k]){
            int v = to[k];
            if(~dis[v]) continue;
            dis[v] = 1 + dis[u];
            par[v] = u;
            q.push(v);
        }
    }
    if(~*find(dis, dis + n, -1)) return cout << "No", 0;

    cout << "Yes\n";
    for(int i = 1; i < n; i++)
        cout << par[i] + 1 << endl;
    return 0;
}
