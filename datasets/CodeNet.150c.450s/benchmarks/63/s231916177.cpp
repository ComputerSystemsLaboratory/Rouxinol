#include <bits/stdc++.h>

using namespace std;

#define INF 1001000100010001000
#define MOD 1000000007
#define EPS 1e-10
#define int long long
#define rep(i, N) for (int i = 0; i < N; i++)
#define Rep(i, N) for (int i = 1; i < N; i++)
#define For(i, a, b) for (int i = (a); i < (b); i++)
#define pb push_back
#define eb emplece_back
#define mp make_pair
#define i_i pair<int, int>
#define vi vector<int>
#define vvi vector<vi >
#define vb vector<bool>
#define vvb vector<vb >
#define vp vector< i_i >
#define all(a) (a).begin(), (a).end()
#define Int(x) int x; scanf("%lld", &x);
#define int2(x, y) int x, y; scanf("%lld %lld", &x, &y);
#define fir first
#define sec second
#define ffir first.first
#define fsec first.second
#define sfir second.first
#define ssec second.second
 
//int dxy[5] = {0, 1, 0, -1, 0};
// assign

#define Edge pair< i_i, int>
#define Graph vector< vp >

//???????§????????????????(???????????????)
//Dijkstra O((E+V)logV)
//dist: ?§????????????????????????§??????????????¢
//?????????: ??????????????¨????????????(??????-1)
vector<int> dijkstra(Graph &g, int s, vi &dist)
{
    int n = g.size();
    vi visited(n, 0); visited[s] = 1;
    vi prev(n, -1);
    dist.assign(n, INF); dist[s] = 0;
    priority_queue< Edge, vector< Edge >, greater< Edge > > pq;
    pq.push(Edge(i_i((int)0, s), (int)-1)); // ????????? ??? ???
    while (pq.size()) {
        int d = pq.top().ffir, v = pq.top().fsec, u = pq.top().second;
        pq.pop();
        if (dist[v] < d) continue; //?????§???????????§???????????°??????
        visited[v] = 2; prev[v] = u;
        for (i_i &e : g[v]) {
            if (visited[e.fir] == 2) continue;
            if (dist[e.fir] > dist[v] + e.sec) {
                dist[e.fir] = dist[v] + e.sec;
                pq.push(Edge(i_i(dist[e.fir], e.fir), v));
                visited[e.fir] = 1;
            }
        }
    }
    return prev;
}

 
signed main()
{
    int2(n, m);
    Int(st);
    Graph g(n, vp());
    vi ans(n);

    rep(i, m) {
        int2(s, t);
        Int(d);
        g[s].pb(i_i(t, d));
    }
    dijkstra(g, st, ans);
    rep(i, n) {
        if (ans[i] == INF) {
            cout << "INF" << endl;
        } else {
            cout << ans[i] << endl;
        }
    }


    return 0;
}