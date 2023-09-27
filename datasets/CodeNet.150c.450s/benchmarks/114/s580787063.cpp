#include <bits/stdc++.h>
using namespace std;
#define rep(i,n)for(int i=0;i<(n);i++)
using ll = long long;
using P = pair<int, int>;

const int INF = 1001001001;
vector<vector<int>> cost;
vector<int> mincost;
vector<bool> used;
int V;

int prim(){
    mincost.assign(V,INF);
    used.assign(V,0);
    mincost[0] = 0;
    int res = 0;
    while(true){
        int v = -1;
        for(int u = 0; u < V; ++u){
            if(!used[u] && (v == -1 || mincost[u] < mincost[v])) v = u;
        }
        if(v == -1) break;//completed
        used[v] = 1;
        res += mincost[v];
        for(int u = 0; u < V; ++u){
            if(cost[v][u] != -1)mincost[u] = min(mincost[u], cost[v][u]);//確定した頂点から行ける頂点について、最小コストを更新
        }
    }
    return res;
}


int main(){
    cin >> V;
    cost.assign(V,vector<int>(V));
    rep(i,V)rep(j,V) cin >> cost[i][j];
    int ans = prim();
    cout << ans << endl;
}

