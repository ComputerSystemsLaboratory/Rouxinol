#include<bits/stdc++.h>
using namespace std;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (a>b) { a=b; return 1; } return 0; }

using Lint=long long;
using Graph=vector<vector<int>>;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N,M; cin>>N>>M;
    Graph G(N);
    for(int i=0;i<M;i++){
        int a,b; cin>>a>>b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    vector<int> color(N,-1);
    int c=0;
    function<void(int)> dfs=[&](int v)
    {
        color[v]=c;
        for(int u:G[v]) if(color[u]==-1){
            dfs(u);
        }
    };
    for(int i=0;i<N;i++) if(color[i]==-1) dfs(i),c++;

    int Q; cin>>Q;
    while(Q--){
        int s,t; cin>>s>>t;
        cout<<(color[s]==color[t]? "yes":"no")<<endl;
    }
    return 0;
}
