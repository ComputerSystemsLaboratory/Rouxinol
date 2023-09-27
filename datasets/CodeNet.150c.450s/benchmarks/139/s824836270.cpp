#include <bits/stdc++.h>
#define pb push_back
using namespace std;
typedef long long ll;
int n, m, pre[100001], dis[100001];
vector<int> adj[100001];
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> q;
bool vis[100001], flag = false;
int main()
{
    cin.sync_with_stdio(0); cin.tie(0);
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        adj[a].pb(b); adj[b].pb(a);
    }
    memset(dis,0x3f,sizeof(dis));
    dis[1] = 0;
    q.push({0,1}); vis[1] = 1;
    while(!q.empty()){
        int cur = q.top().second; q.pop();
        for(int i = 0; i < adj[cur].size(); i++){
            int to = adj[cur][i];
            if(dis[cur]+1 < dis[to]){
                vis[to] = 1;
                pre[to] = cur;
                dis[to] = dis[cur]+1;
                q.push({dis[to],to});
            }
        }
    }
    for(int i = 2; i <= n; i++){
        if(!vis[i])flag = true;
    }
    if(flag){
        cout << "No" << endl;
    }
    else{
        cout << "Yes" << endl;
        for(int i = 2; i <= n; i++){
            cout << pre[i] << endl;
        }
    }
    return 0;
}
