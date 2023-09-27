#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
#define F first
#define S second
#define db double
#define pb push_back
#define rep(i,a,b)  for(ll i=a;i<=b;i++)
#define all(a) a.begin(),a.end()
using namespace std;
 
 ll mod=1e9 +7;
 
ll expo(ll base,ll exponent,ll mod){
    ll ans=1;
    while(exponent!=0){
        if(exponent&1) ans=(1LL*ans*base)%mod;
        base=(1LL*base*base)%mod;
        exponent>>=1;
    }
    return ans%mod;
}
 
vector<bool>  prime(90000002,true);
void Sieve() 
{ 
   
    for (int p=2; p*p<=90000001; p++) 
    { 
        // If prime[p] is not changed, then it is a prime 
        if (prime[p] == true) 
        { 
            for (int i=p*p; i<=90000001; i += p) 
                prime[i] = false; 
        } 
    } 
}

const ll M=200006;
ll f[M],inv[M];

void compute(){
    f[0]=1;
    rep(i,1,M-1){
        f[i]=(1LL*i*f[i-1])%mod;
    }
    inv[M-1]=expo(f[M-1],mod-2,mod);
    for(ll i=M-2;i>=0;i--){
        inv[i]=(1LL*(i+1)*inv[i+1])%mod;
    }
}
ll C(ll n,ll r){
    return (1LL*((1LL*f[n]*inv[r])%mod)*inv[n-r])%mod;
}

ll n,m;
vector<ll> graph[100005];
ll ans[100005]={0};
ll vis[100005]={0};
ll dis[100005];
void bfs()
{
  queue<pair<ll,ll>>q;
  q.push({1LL,0LL});
  vis[1]=1;
  dis[1]=0;
  while(!q.empty())
  {
    pair<ll,ll>p=q.front();
    q.pop();
    for(auto x:graph[p.first])
    {
      if(vis[x]==0)
      {
      vis[x]=1;
      dis[x]=p.second+1;
      q.push({x,p.second+1LL});
      }
    }
  }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // compute();
    // Sieve();
    ll tests=1;
    // cin>>tests;
    while(tests--)
    {
      ll i,j;
      cin>>n>>m;
      rep(i,0,m-1)
      {
        ll a,b;
        cin>>a>>b;
        graph[a].pb(b);
        graph[b].pb(a);
      }
      for(i=0;i<=n;i++) {vis[i]=0;dis[i]=500000;}
      // dfs(1,-1,0);
        bfs();
      bool flag=true;
      for(i=1;i<=n;i++)
      {
        if(vis[i]==0) {flag=false;break;}
      }
      if(!flag) {cout<<"No";return 0;}

      for(i=2;i<=n;i++)
      {
        for(auto x:graph[i])
        {
          if(dis[x]<dis[ans[i]]) ans[i]=x;
        }
      }
      cout<<"Yes"<<"\n";
      for(i=2;i<=n;i++) cout<<ans[i]<<"\n";
      
    }
    return 0;
   }