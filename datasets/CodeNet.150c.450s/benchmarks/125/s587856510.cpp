#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)   FOR(i,0,n)
#define pb emplace_back
typedef long long ll;
typedef pair<int,int> pint;

vector<int> g[101];
bool used[101];
pint ans[101];
int cnt;
void dfs(int v){
    used[v]=true;
    ans[v].first=cnt++;
    rep(i,g[v].size()){
        if(!used[g[v][i]]){
            dfs(g[v][i]);
        }
    }
    ans[v].second=cnt++;
}
int main(){
    int n,u,k,v;
    cin>>n;
    rep(i,n){
        cin>>u>>k;
        --u;
        rep(j,k){
            cin>>v;
            --v;
            g[u].pb(v);
        }
    }
    cnt=1;
    rep(i,n){
        if(!used[i]) dfs(i);
    }
    rep(i,n) cout<<i+1<<" "<<ans[i].first<<" "<<ans[i].second<<endl;
    return 0;
}
