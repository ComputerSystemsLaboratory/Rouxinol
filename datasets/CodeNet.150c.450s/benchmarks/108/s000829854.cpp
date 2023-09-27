#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;

int main(){
    int n; cin>>n;
    Graph G(n);
    rep(i,n){
        int u,k; cin>>u>>k;
        rep(j,k){
            int v; cin>>v;
            G[u-1].push_back(v-1);
        }
    }

    vector<int> dist(n,-1);
    queue<int> que;

    dist[0]=0;
    que.push(0);

    while(!que.empty()){
        int v = que.front();
        que.pop();

        for(auto nv : G[v]){
            if(dist[nv]!=-1)continue;
            dist[nv] = dist[v] + 1;
            que.push(nv);
        }
    }
    rep(i,n){
        cout<<i+1<<" "<<dist[i]<<endl;
    }
    return 0;
}
