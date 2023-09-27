#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define ll long long
#define pii pair<int,int>
#define forn(i,n) for(int i=0; i<(int)n; i++)
ll power(ll x,ll n);
bool isprime(ll n);


void test_case()
{
    int n,m,a,b;
    cin>>n>>m;
    vector<int> adj[n+1];
    while(m--) {
        cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    priority_queue<pii,vector<pii>, greater<pii>> q;
    q.push({0,1});
    int d[n+1];
    int p[n+1];
    for(ll i=0;i<=n;i++)
        d[i]=INT_MAX;
    d[1]=0;
    while(!q.empty()) {
        int d_v=q.top().first;
        int v=q.top().second;
        q.pop();
        if(d_v!=d[v])
            continue;
        for(auto edge:adj[v]) {
            int to=edge;
            if(d[v]+1<d[to]) {
                d[to]=d[v]+1;
                p[to]=v;
                q.push({d[to],to});
            }
        }
    }
    for(ll i=2;i<=n;i++)
        if(d[i]==INT_MAX) {
            cout<<"No";
            return;
        }
    cout<<"Yes\n";
    for(ll i=2;i<=n;i++) {
        cout<<p[i]<<"\n";
    }

}

int main()
{
    fastio
//    int t;
//    cin>>t;
//    while(t--)
    test_case();
}
ll power(ll x,ll n)
{
    ll ans=1;
    while(n>0) {
        if(n&1)
            ans*=x;
        n>>=1;
        x*=x;
    }
    return ans;
}

bool isprime(ll n)
{
    if(n==2 || n==3)
        return true;
    if(n<=1 || n%2==0 || (n%6!=1 && n%6!=5))
        return false;
    for(ll i=3;i*i<=n;i+=2) {
        if(n%i==0)
            return false;
    }
    return true;
}
