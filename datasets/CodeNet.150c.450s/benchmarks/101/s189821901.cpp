#include <bits/stdc++.h>
using namespace std;

int n,m;
vector<vector<int>> G(100005,vector<int>(0));
vector<int> color(100005,0);

void dfs(int u,int c){
    if(color[u]>0) return;
    color[u]=-1;
    for(int i=0;i<G[u].size();i++){
        if(color[G[u][i]]==0){
            dfs(G[u][i],c);
        }
    }
    color[u]=c;
}

int main(){
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    for(int i=0;i<n;i++){
        dfs(i,i+1);
    }

    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int a,b;
        cin>>a>>b;
        if(color[a]==color[b]) cout<<"yes";
        else cout<<"no";
        cout<<endl;
    }
}
    
    
