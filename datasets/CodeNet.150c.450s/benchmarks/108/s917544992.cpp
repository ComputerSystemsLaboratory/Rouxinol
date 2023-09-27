#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)   FOR(i,0,n)
#define pb emplace_back
typedef long long ll;
typedef pair<int,int> pint;

vector<int> g[101];
bool used[101];
int ans[101];
void bfs(int sr){
    queue<pint> q;q.push({sr,0});
    used[sr]=true;
    while(!q.empty()){
        pint pi=q.front();q.pop();
        ans[pi.first]=pi.second;
        rep(i,g[pi.first].size()){
            int nx=g[pi.first][i];
            if(!used[nx]){
                used[nx]=true;
                q.push({nx,pi.second+1});
            }
        }
    }
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
    memset(ans,-1,sizeof(ans));
    bfs(0);
    rep(i,n) cout<<i+1<<" "<<ans[i]<<endl;
    return 0;
}
