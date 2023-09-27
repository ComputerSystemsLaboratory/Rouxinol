#include<iostream>
#include<queue>
#include<vector>
using namespace std;
using ll = long long;

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> g(n,vector<int>());
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        a--;
        b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    vector<int> ans(n,-1);
    queue<int> q;
    ans[0]=0;
    q.push(0);
    while(!q.empty()){
        int v=q.front();
        q.pop();
        for(int nv : g[v]){
            if(ans[nv]!=-1) continue; 
            ans[nv]=v+1;
            q.push(nv);
        }
    }
    cout<<"Yes"<<endl;
    for(int i=1;i<n;i++) cout<<ans[i]<<endl;
}