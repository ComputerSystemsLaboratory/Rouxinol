#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (n); i++)
#define all(v) v.begin(), v.end()
#define MOD 1000000007
const int INF = 1LL<<30;

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> G(n);

    vector<int> ans(n);
    rep(i,m){
        int a,b;
        cin>>a>>b;
        a--,b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    queue<int> q;
    vector<int> d(n,-1);
    q.push(0);
    while(!q.empty()){
        int v=q.front();
        q.pop();

        for(int nv:G[v]){
            if(d[nv]!=-1) continue;
            d[nv]=d[v]+1;
            ans[nv]=v+1;
            q.push(nv);
        }
    }

    cout<<"Yes"<<endl;
    for(int i=1;i<n;i++) cout<<ans[i]<<endl;
}