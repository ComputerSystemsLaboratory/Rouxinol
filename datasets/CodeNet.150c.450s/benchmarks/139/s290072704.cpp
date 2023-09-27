#include<bits/stdc++.h>

typedef long long ll;
typedef long double ld;
using namespace std;
mt19937_64 mrand(chrono::steady_clock::now().time_since_epoch().count());
//mt19937_64 mrand(42);
#define ii for(int i=1;i<=n;++i)
#define ji for(int j=1;j<=n;++j)
#define jj for(int j=1;j<=m;++j)
#define ij for(int i=1;i<=m;++i)
#define sz(x) ((ll)x.size())
#define all(x) x.begin(),x.end()
#define al(x) x+1,x+1+n
#define asd cout<<"ok"<<endl;
#define asdd cout<<"okok"<<endl;
#define pii pair<int,int>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vl vector<ll>
#define vii vector<pair<int,int>>
#define pr(v) for(auto i:v) cout<<i<<" ";cout<<endl
#define prt(a, l, r) for(auto i=l;i<=r;++i) cout<<a[i]<<" ";cout<<endl;
#define pc(x) __builtin_popcount(x)
#define pb push_back

const int maxn = 200005;
struct edge {
    int v,w;
};
vector<edge> g[maxn];
int dis[maxn], vis[maxn], lst[maxn];
priority_queue<pii,vector<pii>,greater<pii>> q;
void dijkstra(int u) {
    memset(dis,0x3f,sizeof(dis));
    dis[u] = 0;
    q.push({0, u});
    while(!q.empty()) {
        pii cur = q.top(); q.pop();
        if(vis[cur.second]) continue;
        vis[cur.second] = 1;
        for(edge e : g[cur.second]) {
            if(dis[e.v] > dis[cur.second] + e.w) {
                dis[e.v] = dis[cur.second] + e.w;
                lst[e.v] = cur.second;
                q.push({dis[e.v], e.v});
            }
        }
    }
}
int main() {
    int n, m;
    cin >> n >> m;
    for(int i=1;i<=m;++i) {
        int u,v;
        cin>>u>>v;
        g[u].pb({v,1});
        g[v].pb({u,1});
    }
    dijkstra(1);
    for(int i=2;i<=n;++i) if(dis[i] > 1e9) return cout<<"No"<<endl,0;
    cout<<"Yes"<<endl;
    for(int i=2;i<=n;++i) cout<<lst[i]<<endl;
}