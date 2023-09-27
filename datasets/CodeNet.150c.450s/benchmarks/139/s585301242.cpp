// Hail god Yato
 
#include <bits/stdc++.h> 
using namespace std;
 
#define hs ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
const ll mod = 1000000007;
const ll INF = 1e18;
const ll MAX = 100001;
//
//
vector<vector<int>> graph;
vector<int> ans, val;
ll n, m;
void bfs(int k, vector<int>& vis){
    queue<int> q;
    q.push(k);
    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(int it : graph[node]){
            if(!vis[it]){
                val[it] = val[node]+1;
                ans[it] = node;
                vis[it] = 1;
                q.push(it);
            }
        }
    }
    for(int i = 1; i <= n; i++)
        if(!vis[i]){
            cout<<"No";
            exit(0);
        }
}
void solve(){
    // ll n, m;
    cin>>n>>m;
    graph.resize(n+1);
    for(int i = 0; i < m; i++){
        int fst, snd;
        cin>>fst>>snd;
        graph[fst].push_back(snd);
        graph[snd].push_back(fst);
    }
    val.resize(n+1);
    ans.resize(n+1);
    vector<int> vis(n+1, 0);
    val[1] = 0;
    bfs(1, vis);
    cout<<"Yes\n";
    for(int i = 2; i <= n; i++)
        cout<<ans[i]<<"\n";
}
int main(){ 
        hs;
        ll t;
        t=1;
        // cin>>t;
        for (int i=1; i<=t; i++){
                //cout<<"Case #"<<i<<": ";
                solve();
         }
        return 0; 
}