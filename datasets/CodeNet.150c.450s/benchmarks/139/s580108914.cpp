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
    rep(i,m){
        int a,b;
        cin>>a>>b;
        a--,b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    vector<bool> seen(n,false);
    queue<int> que;
    que.push(0);
    seen[0]=true;
    vector<int> ans(n,0);
    while(!que.empty()){
        int v=que.front();
        que.pop();
        for(auto nv : G[v]){
            if(seen[nv]) continue;
            ans[nv]=v+1;
            seen[nv]=true;
            que.push(nv);
        }
    }

    cout<<"Yes"<<endl;
    for(int i=1;i<n;i++){
        cout<<ans[i]<<endl;
    }
}