#include <bits/stdc++.h>

#define rep(n) for(int i=0;i<n;i++)
#define repp(j, n) for(int j=0;j<n;j++)
#define reppp(i, m, n) for(int i=m;i<n;i++)
#define all(c) c.begin(), c.end()
#define rall(c) c.rbegin(), c.rend()
#define debug(x) cerr << #x << ": " << x << endl

using namespace std;

typedef long long ll;
typedef pair<ll, ll> Pll;
typedef pair<int, int> Pii;
struct edge{int from, to; ll cost;};

const ll MOD = 1000000007;
const long double EPS = 1e-10;

vector<ll> d(1001, LLONG_MAX);

bool bellman_ford(int start, int n, vector<edge> edges){
    d[start] = 0LL;
    bool updated;
    rep(n){
        updated = false;
        for(edge e: edges){
            if(d[e.from] != LLONG_MAX && d[e.from] + e.cost < d[e.to]){
                d[e.to] = d[e.from] + e.cost;
                updated = true;
            }
        }
        if(!updated) return true;
    }
    return false;
}

int main(){
    std::ios::sync_with_stdio(0); cin.tie(0);
    int n,m,r;
    cin >> n >> m >> r;
    vector<edge> edges(m);
    int from,to; ll cost;
    rep(m){
        cin >> from >> to >> cost;
        edges[i].from = from;
        edges[i].to = to;
        edges[i].cost = cost;
    }
    if(bellman_ford(r, n, edges)){
        rep(n){
            if(d[i] == LLONG_MAX){
                cout << "INF" << endl;
            }else{
                cout << d[i] << endl;
            }
        }
    }else{
        cout << "NEGATIVE CYCLE" << endl;
    }
    return 0;
}
