#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define rep(i,l,r) for (ll i = (ll)l; i < (ll)(r); i++)
const ll INF = 1e9;

using Graph  = vector<vector<int> >;

int N,M;
Graph G;

int main(){
    cin >> N >> M;
    G.assign(N,vector<int>());
    rep(i,0,M){
        int a,b; cin >> a >> b; a--; b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    vector<int> ans(N,INF);
    ans[0] = -1;
    queue<int> que;
    que.push(0);
    while(que.size()){
        int v = que.front(); que.pop();
        for(auto &nv : G[v]){
            if(ans[nv] == INF){
                que.push(nv);
                ans[nv] = v;
            }
        }
    }
    cout << "Yes" << endl;
    for(auto &v : ans){
        if(v == -1) continue;
        cout << v+1 << endl;
    }
}