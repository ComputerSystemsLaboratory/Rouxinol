#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

vector<vector<int>> G;
vector<bool> seen;
vector<pair<int,int>> ts;
int cnt=1;

void dfs(int v){
    seen[v]=true;
    ts[v].first = cnt;
    cnt++;

    for(auto next_v : G[v]){
        if(seen[next_v])continue;
        dfs(next_v);
    }
    ts[v].second = cnt;
    cnt++;
}

int main(){
    int N; 
    cin>>N;
    G.resize(N);
    ts.resize(N);
    rep(i,N){
        int u,k; 
        cin>>u>>k;
        rep(j,k){
            int vz; 
            cin>>vz;
            G[u-1].push_back(vz-1);
        }
    }
    seen.assign(N, false);
    for(int i=0; i<N; i++){
        if(!seen[i])dfs(i);
    }
    rep(i,N){
        cout<<i+1<<" "<<ts[i].first<<" "<<ts[i].second<<endl;
    }
    return 0;
}
