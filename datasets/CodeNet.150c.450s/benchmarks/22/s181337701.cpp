//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<n; ++i)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
using namespace std;
using ll = int64_t;
using P = pair<int, int>;
using vs = vector<string>;
using vi = vector<int>;
using vvi = vector<vi>;

struct edge{
    int from, to;
    int64_t cost;
    edge(int a=0, int b=0, int64_t c=0LL):from(a), to(b), cost(c) {}
};


vector<vector<edge> > G; // resizeの必要あり


// サイズ,辺の情報,初期化の必要あり
vector<edge> es;

const int64_t INF = INT64_MAX/10;

vector<ll> bellman(int, int);
bool bell_check(int);

int main() {
    int n, m, s;
    cin >> n >> m >> s;
    es.resize(m);
    rep(i, m) {
        int a, b;
        ll c;
        cin >> a >> b >> c;
        es[i] = edge(a, b, c);
    }

    vector<ll> d = bellman(s, n);
    if(d[s] == INF) {
        cout << "NEGATIVE CYCLE" << endl;
    } else {
        rep(i, n) {
            if(d[i] == INF) {
                cout << "INF" << endl;
            } else {
                cout << d[i] << endl;
            }
        }
    }
}







// sは始点,vは頂点数
vector<int64_t> bellman(int s, int v) {
    vector<int64_t> d(v, INF);
    int E = es.size();
    d[s] = 0LL;
    int www=0;
    while(true) {
        bool update = false;
        for(int i=0; i < E; ++i) {
            edge e = es[i];
            if(d[e.from] != INF && d[e.to] > d[e.from] + e.cost) {
                d[e.to] = d[e.from] + e.cost;
                update = true;
            }
        }
        if(!update) break;
        if(www == v*2) {
            d[s] = INF;
            break;
        }
        
        www++;
    }
    return d;
}

// vは頂点数, 負の閉路が存在するならtrue
bool bell_check(int v) {
    vector<int64_t> d(v);
    int E = es.size();
    for(int i = 0; i < v; ++i) {
        for(int j = 0; j < E; ++j) {
            edge e = es[j];
            if(d[e.to] > d[e.from] + e.cost) {
                d[e.to] = d[e.from] + e.cost;
                if(i == v-1) return true;
            }
        }
    }
    return false;
}
