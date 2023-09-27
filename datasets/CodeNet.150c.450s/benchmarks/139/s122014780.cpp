 #include "bits/stdc++.h"
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
 
typedef pair<int, int> pi;
typedef pair<ll,ll> pl;

typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<vi> vvi;

 #define rep(i, a, b) for (int i=a; i<(b); i++)
    
 #define sz(x) (int)(x).size()
 #define mp make_pair
 #define pb push_back
 #define f first
 #define s second
 #define lb lower_bound
 #define ub upper_bound
 #define all(x) x.begin(), x.end()
 

 #define trav(container, it) for(typeof(container.begin()) it=container.begin(); it!=container.end(); it++)
 
 #define PI 3.14159265358979323846264338327950L
const int MOD = 1000000007;
const char nl = '\n';
 
vvi adj;
vi vis;
vi v;

void bfs()
{
    queue<int> q;
    q.push(1);
    vis[1] = 1;
    
    while(q.size()){
        int cur = q.front(); q.pop();
        for(auto i : adj[cur]){
            if(!vis[i])
            {
                v[i] = cur;
                q.push(i);
                vis[i] = 1;
            }
        }
    }
}

int main() 
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n,m;cin>>n>>m;

    adj.resize(n+1);
    vis.resize(n+1);
    v.resize(n+1);

    int x,y;
    rep(i,0,m)
    {
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    bfs();

    cout<<"Yes"<<nl;
    rep(i,2,n+1)
    {
        cout<<v[i]<<nl;
    }
}
