#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define pb push_back
#define mp make_pair

using namespace std;

typedef long long ll;
typedef pair<int, int> P;

const int MOD = 1000000007;
const int INF = 1000000000;
const ll LINF = 1000000000000000000L;

struct edge {
    int from, to, cost;
};

struct UniTree {
    int *par, *rank;

    UniTree(int n) {
        par = new int[n];
        rank = new int[n];
        for(int i = 0; i < n; i++) {
            par[i] = i;
            rank[i] = 0;
        }
    }

    int root(int x) {
        if(par[x] == x) return x;
        else return par[x] = root(par[x]);
    }

    void merge(int x, int y) {
        x = root(x);
        y = root(y);
        if(x == y) return;
        if(rank[x] < rank[y]) {
            par[x] = y;
        }else {
            par[y] = x;
            if(rank[x] == rank[y]) rank[x]++;
        }
    }
    
    bool same(int x, int y) {
        return root(x) == root(y);
    }
};


bool comp(const edge& e1,const edge& e2) {
    return e1.cost < e2.cost;
}

edge G[2000];

int main() {
    int V, E, r;
    cin >> V >> E >> r;
    rep(i, E) {
        int s, t, d;
        cin >> s >> t >> d;
        G[i] = {s, t, d};
    }

    int d[1000];
    fill(d, d + V, INF);
    d[r] = 0;
    bool loop = false;
    rep(i, V) {
        bool update = false;
        rep(j, E) {
            edge e = G[j];
            if(d[e.from] != INF && d[e.to] > d[e.from] + e.cost) {
                d[e.to] = d[e.from] + e.cost;
                if(i == V - 1) {
                    loop = true;
                }
                update = true;
            }
        }
        if(loop) break;
        if(!update) break;
    }

    if(loop) {
        cout << "NEGATIVE CYCLE" << endl;
    }else {
        rep(i, V) {
            if(d[i] == INF) cout << "INF" << endl;
            else cout << d[i] << endl;
        }
    }
}

