#include<bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int (i) = 0; (i) < (n); (i)++)
#define repp(i, n, m) for(int (i) = (n); (i) < (m); (i)++)
#define repn(i, n) for(int (i) = 1; (i) <= (n); (i)++)
#define repr(i, n) for(int (i) = (n-1); (i) >= 0; (i)--)
#define all(x) (x).begin(), (x).end()
#define lint long long
#define ulint unsigned long long
#define ldou long double
#define fi first
#define se second
#define setpre(x) std::cout << fixed << setprecision(x)
#define ii(x) int x; cin >> (x)
#define ii2(x, y) int x, y; cin >> (x) >> (y)
#define ii3(x, y, z) int x, y, z; cin >> (x) >> (y) >> (z)
#define out(x) cout << (x) << endl
#define outs(x) cout << (x) << " "
#define yn(x) cout << ((x)?("Yes"):("No")) << endl
#define YN(x) cout << ((x)?("YES"):("NO")) << endl
#define bit_c(x) __builtin_popcountll(x)

inline void logger(){ std::cout << " [LOGGER] " << endl; }
template<typename A, typename... B>
void logger(const A& a, const B&... b){
    cout << a << " , "; logger(b...);
}

typedef pair<lint, lint> P;
const lint MOD = 1000000007;
const lint MOD9 = 998244353;
const lint INF = MOD * MOD;
const int MAX = 200005;

/* ...o(^-^)o... */

struct edge{
    int from, to; lint cost;
    edge(int f, int t, lint c) : from(f), to(t), cost(c) {}
    edge(int t, lint c) : from(-1), to(t), cost(c) {}
};

struct dijkstra{
    vector<vector<edge> > G;
    vector<lint> d;
    int V, s;
    dijkstra(vector<vector<edge> > _G, int _s) : G(_G), s(_s){
        init();
    }
    void init(){
        V = G.size();
        d = vector<lint>(V, INF);
        priority_queue<P, vector<P>, greater<P> > que; que.push(P(0, s));
        d[s] = 0;
        while(!que.empty()){
            P p = que.top(); que.pop();
            int v = p.second;
            if(d[v] < p.first) continue;
            for(int i = 0; i < G[v].size(); i++){
                edge e = G[v][i];
                if(d[e.to] > d[v] + e.cost){
                    d[e.to] = d[v] + e.cost;
                    que.push(P(d[e.to], e.to));
                }
            }
        }
    }
    int dist(int t){
        return d[t];
    }
};

int main(){
    int n; cin>>n;
    vector<vector<edge>> G(n);
    rep(i,n){
        int u,k; cin>>u>>k;
        rep(j,k){
            lint v,c; cin>>v>>c;
            G[u].push_back(edge(u,v,c));
        }
    }

    dijkstra dij(G, 0);
    rep(v, n){
        outs(v); out(dij.dist(v));
    }
}

