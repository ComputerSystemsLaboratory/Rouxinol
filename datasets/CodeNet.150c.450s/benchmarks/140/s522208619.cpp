#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<long long, long long> P;
struct edge{long long to,cost;};
const int inf = 1 << 27;
const long long INF = 1LL << 60;
const int COMBMAX = 1001001;
const long long MOD = 1000000007;
#define rep(i,n) for(int i = 0; i < (n); ++i)
#define eachdo(v, e) for(const auto& e : (v))
#define all(v) (v).begin(), (v).end()
#define lower_index(v, e) (long long)distance((v).begin(), lower_bound((v).begin(), (v).end(), e))
#define upper_index(v, e) (long long)distance((v).begin(), upper_bound((v).begin(), (v).end(), e))
long long mpow(long long a, long long n, long long mod = MOD){long long res = 1; while(n > 0){if(n & 1)res = res * a % mod; a = a * a % mod; n >>= 1;} return res;}
void yn(bool j){cout << (j ? "Yes" : "No") << endl; return;}
template<class Head> void pt(Head&& head){cout << head << endl; return;}
template<class Head, class... Tail> void pt(Head&& head, Tail&&... tail){cout << head << " "; pt(forward<Tail>(tail)...);}
template<class T> void debug(T v){rep(i, v.size()) cout << v[i] << " " ; cout << endl;}
template<class T> void debug2(T v){rep(i, v.size()){rep(j, v[i].size()) cout << v[i][j] << " " ; cout << endl;}}
template<class T1, class T2> long long bcount(T1 v, T2 a){return upper_index(v, a) - lower_index(v, a);} 
template<class T1, class T2> inline bool chmin(T1 &a, T2 b){if(a > b){a = b; return true;} return false;}
template<class T1, class T2> inline bool chmax(T1 &a, T2 b){if(a < b){a = b; return true;} return false;}
template<class T1, class T2> void sortTwoVecter(vector<T1> &f, vector<T2> &s, bool isReverse = false){
    vector<pair<T1, T2>> p;
    rep(i, f.size()) p.emplace_back(make_pair(f[i], s[i]));
    if (!isReverse) sort(p.begin(), p.end());
    else sort(p.rbegin(), p.rend());
    rep(i, f.size()) tie(f[i], s[i]) = p[i];
    return;
}

class UnionFind {
public:
    vector <ll> par;
    vector <ll> siz;

    UnionFind(ll sz_): par(sz_), siz(sz_, 1LL) {
        for (ll i = 0; i < sz_; ++i) par[i] = i;
    }
    void init(ll sz_) {
        par.resize(sz_);
        siz.assign(sz_, 1LL);
        for (ll i = 0; i < sz_; ++i) par[i] = i;
    }

    ll find(ll x) {
        while (par[x] != x) {
            x = par[x] = par[par[x]];
        }
        return x;
    }

    bool merge(ll x, ll y) {
        x = find(x);
        y = find(y);
        if (x == y) return false;
        if (siz[x] < siz[y]) swap(x, y);
        siz[x] += siz[y];
        par[y] = x;
        return true;
    }

    bool issame(ll x, ll y) {
        return find(x) == find(y);
    }

    ll size(ll x) {
        return siz[find(x)];
    }
};


struct Graph{
public:
ll V;
vector<vector<edge>> Glist;
vector<vector<ll>> Gmatrix;
Graph(ll NodeNum){
    V = NodeNum;
    Glist.resize(V);
}
    void add(ll from,ll to,ll cost = 1){
        Glist[from].push_back({to,cost});
    }

    void UpdateGmatrix() {
        Gmatrix.resize(V);
        rep(i,V){
            Gmatrix[i].resize(V,INF);
            eachdo(Glist[i],e){
                Gmatrix[i][e.to] = e.cost;
            }
        }
    }

    vector<vector<ll>> WarshallFloyd(){
        UpdateGmatrix();
        vector<vector<ll>> dist = Gmatrix;
        rep(i,V) dist[i][i] = 0;
        rep(k,V)rep(i,V)rep(j,V) chmin(dist[i][j],dist[i][k]+dist[k][j]);
        return dist;
    }

    vector<bool> hasNegativeLoop(){
        vector<bool> ret(V,false);
        vector<ll> dist(V,0);
        rep(loop,2*V-1){
            rep(i,V)eachdo(Glist[i],e){
                if(dist[i] + e.cost < dist[e.to]){
                    dist[e.to] = dist[i] + e.cost;
                    if(V-1 <= loop) ret[e.to] = true;        
                }
            }
        }
        return ret;
    }

    vector<ll> BellmanFord(ll start){
        vector<ll> dist(V,INF);
        dist[start] = 0;
        rep(loop,V-1){
            rep(i,V)eachdo(Glist[i],e){
                if(dist[i] + e.cost < dist[e.to]){
                    dist[e.to] = dist[i] + e.cost;        
                }
            }
        }
        return dist;
    }

    vector<ll> Dijkstra(ll start){
        vector<ll> dist(V,INF);
        priority_queue<P,vector<P>,greater<P>> que;
        dist[start] = 0;
        que.push(P(0,start)); 
        while(!que.empty()){
            P p = que.top();que.pop();
            ll v = p.second;
            if(dist[v]<p.first) continue;
            rep(i,Glist[v].size()){
                edge e = Glist[v][i];
                if(dist[v] + e.cost < dist[e.to]){
                    dist[e.to] = dist[v]+e.cost;
                    que.push(P(dist[e.to],e.to));
                }
            }
        }
        return dist;
    }

    // needs UnionFind
    // needs to be undirected graph
    ll kruskal(){
        vector<tuple<ll, ll, ll>> list_e; // cost,u,v
        rep(i, V) eachdo(Glist[i], e){
            if (i >= e.to) continue;
            list_e.emplace_back(make_tuple(e.cost, (ll)i, e.to));
        }        
        sort(list_e.begin(), list_e.end());
        ll ret = 0;
        UnionFind uf(V);
        rep(i, list_e.size()){
            ll cost, from, to;
            tie(cost, from, to) = list_e[i];
            if (!uf.issame(from, to)){
                ret += cost;
                uf.merge(from, to);
            }
        }
        return ret;
    }

};

int main(){
    ll V, E; cin >> V >> E;
    Graph g(V);
    rep(i, E){
        ll a, b, c; cin >> a >> b >> c;
        g.add(a, b, c);
        g.add(b, a, c);
    }
    pt(g.kruskal());
    return 0;
}
