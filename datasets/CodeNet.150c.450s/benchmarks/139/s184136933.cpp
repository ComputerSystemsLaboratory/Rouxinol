#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long;
using namespace std;

int main(){
    int n, m; cin >> n >> m;

    vector<vector<int>> G(n);
    rep(i,m){
        int a, b; cin >> a >> b; a--; b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    vector<pair<int,int>> dist(n,make_pair(1<<30,-1));
    dist[0] = make_pair(0,-1);
    queue<int> que;
    que.push(0);
    while(!que.empty()){
        int v = que.front();
        que.pop();
        for(auto nv : G[v]){
            if(dist[v].first + 1 < dist[nv].first){
                dist[nv].first = dist[v].first + 1;
                dist[nv].second = v; que.push(nv);
            }
        }
    }
    
    cout << "Yes" << endl;
    rep(i,n) if(i) cout << dist[i].second + 1 << endl;
    return 0;
}