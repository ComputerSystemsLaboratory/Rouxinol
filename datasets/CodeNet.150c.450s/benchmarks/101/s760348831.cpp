#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

vector<int> g[100005];
int color[100005];
const int INF = 1001001001;
int nc = 0;

void dfs(int x, int b=-1){
    color[x] = nc;
    if(g[x].empty())return;
    for (int i = 0; i < g[x].size(); i++){
        int v = g[x][i];
        if(color[v] != INF)continue;
        color[v] = nc;
        dfs(v, x);
    }
    return;
}

int main() {
    int n, m; cin >> n >> m;
    rep(i, m){
        int s, t; cin >> s >> t;
        g[s].push_back(t);
        g[t].push_back(s);
    }

    rep(i, n){
        color[i] = INF;
    }

    rep(i, n){
        if(color[i] == INF){
            dfs(i);
            nc++;
        }
    }
    
    int q; cin >> q;
    rep(i, q){
        int s, t; cin >> s >> t;
        if(color[s] == color[t]){
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }

    
    return 0;
}
