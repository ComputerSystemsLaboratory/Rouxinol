#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
typedef pair<int,int> P;
using ll = long long;
const int INF=1e9;

int main(){
    int n,m;
    vector<int> mp[100005];
    vector<int> ans(100005,-1);
    cin>>n>>m;
    vector<int> dist(n,INF);
    rep(i,m){
        int a,b;
        cin>>a>>b;
        a--;b--;
        mp[a].push_back(b);
        mp[b].push_back(a);
    }
    
    dist[0]=0;
    ans[0]=0;
    queue<int> que;
    que.push(0);
    while(!que.empty()){
        int q=que.front();que.pop();
        for(auto u:mp[q]){
            if(dist[u]!=INF) continue;
            dist[u]=dist[q]+1;
            que.push(u);
            ans[u]=q;
        }
    }
    cout<<"Yes"<<endl;
    for(int i=1;i<n;i++) cout<<ans[i]+1<<endl;
}