#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using vec=vector<ll>;
using mat=vector<vec>;
#define For(i,a,b) for(i=a;i<b;i++)
#define rep(i,N) For(i,0,N)
#define rep1(i,N) For(i,1,N)
#define all(v) (v).begin(),(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define vsort(v) sort(all(v))
#define vrsort(v) sort(allr(v))
#define mod 1000000007
#define endl "\n"
#define output(v) do{bool f=0;for(auto i:v){cout<<(f?" ":"")<<i;f=1;}cout<<endl;}while(0)
using datas=pair<ll,ll>;
using tdata=pair<ll,datas>;

long mmid(long a,long b,long c){return a<b?(b<c?b:max(a,c)):(b>c?b:min(a,c));}

ll modinv(ll a) {
  ll b=mod,u=1,v=0,t;
  while(b){
    t=a/b;
    a-=t*b; swap(a,b);
    u-=t*v; swap(u,v);
  }
  return (u+mod)%mod;
}

ll moddevide(ll a,ll b){return (a*modinv(b))%mod;}

ll modncr(ll n,ll r){
  ll i,plus=1;
  rep(i,r){
    plus=(plus*(n-i))%mod;
    plus=moddevide(plus,i+1);
  }
  return plus;
}

ll modncrlistp[200000],modncrlistm[200000];

ll modncrs(ll n,ll r){
  ll i,j;
  if(modncrlistp[n]==0){
    for(i=n;i>=0;i--){
      if(modncrlistp[i])break;
    }
    if(i<0){
      modncrlistp[0]=1;
      rep1(i,n+1){
        modncrlistp[i]=(modncrlistp[i-1]*i)%mod;
      }
    }else{
      For(j,i+1,n+1){
        modncrlistp[j]=(modncrlistp[j-1]*j)%mod;
      }
    }
  }
  if(modncrlistm[n]==0){
    for(i=n;i>=0;i--){
      if(modncrlistm[i])break;
    }
    if(i<0){
      modncrlistm[0]=1;
      rep1(i,n+1){
        modncrlistm[i]=(modncrlistm[i-1]*modinv(i))%mod;
      }
    }else{
      For(j,i+1,n+1)modncrlistm[j]=(modncrlistm[j-1]*modinv(j))%mod;
    }
  }
  return (((modncrlistp[n]*modncrlistm[r])%mod)*modncrlistm[n-r])%mod;
}

ll euclidean_gcd(ll a, ll b) {
  if(a<b) return euclidean_gcd(b, a);
  ll r;
  while ((r=a%b)){a=b;b=r;}
  return b;
}

ll countdigits(ll n){
  ll ans=0;
  while(n){n/=10;ans++;}
  return ans;
}

ll sumdigits(ll n){
  ll ans=0;
  while(n){ans+=n%10;n/=10;}
  return ans;
}

void printmap(vector<ll>& a,ll H,ll W){
  ll i,j;
  For(i,0,H+2){
    For(j,0,W+2){cout<<a[i*(W+2)+j];}
    cout<<endl;
  }
}
void inputmap(vector<ll>& a,ll H,ll W){
  ll i,j;
  string ss;
  For(i,1,H+1){
    cin>>ss;
    For(j,1,W+1){
      if(ss[j-1]=='#'){
        a[i*(W+2)+j]=1;
      }else{
        a[i*(W+2)+j]=0;
      }
    }
  }
}
ll lpow(ll a,ll b){
  ll i,res=1;
  rep(i,b){
    res*=a;
  }
  return res;
}

struct costmap{
  vector<vector<pair<long long,long long>>> tree;
  vector<pair<pair<long long,long long>,long long>> edges;
  vector<long long> dist;
  vector<long long> decycle;
  costmap(long long N) :tree(N){
    dist.resize(N);
    for(long long i=0;i<N;i++)dist[i]=LLONG_MAX;
  }
  void inputmap(long long M){
    long long a,b,c,i;
    edges.resize(M);
    for(i=0;i<M;i++){
      cin>>a>>b>>c;

      tree[a].push_back(make_pair(b,c));
      edges[i]=make_pair(make_pair(a,b),c);
    }
  }
  void inputtree(long long M){
    long long a,b,c,i;
    for(i=0;i<M;i++){
      cin>>a>>b>>c;
      tree[a].push_back(make_pair(b,c));
      tree[b].push_back(make_pair(a,c));
    }
  }
  void dijkstra(long long start){
    long long i,N=dist.size(),cnt=1;
    pair<long long,long long> x;
    dist[start]=0;
    priority_queue<pair<long long,long long>,vector<pair<long long,long long>>,greater<pair<long long,long long>>> que;
    for(i=0;i<(long long)tree[start].size();i++){
      que.push(make_pair(tree[start][i].second,tree[start][i].first));
    }
    while(cnt<N&&!que.empty()){
      x=que.top();que.pop();
      if(dist[x.second]!=LLONG_MAX)continue;
      dist[x.second]=x.first;
      cnt++;
      for(i=0;i<(long long)tree[x.second].size();i++){
        if(dist[tree[x.second][i].first]==LLONG_MAX){
          que.push(make_pair(dist[x.second]+tree[x.second][i].second,tree[x.second][i].first));
        }
      }
    }
  }

  ll bellmanford(long long start){
    long long i,j,N=dist.size(),E=edges.size();
    decycle.resize(N);
    dist[start]=0;
    for(i=0;i<N;i++){
      for(j=0;j<E;j++){
        if(dist[edges[j].first.first]!=LLONG_MAX){
          dist[edges[j].first.second]=min(dist[edges[j].first.second],dist[edges[j].first.first]+edges[j].second);
        }
      }
      decycle[i]=0;
    }

    for(j=0;j<E;j++){
      if(dist[edges[j].first.first]!=LLONG_MAX&&dist[edges[j].first.second]>dist[edges[j].first.first]+edges[j].second){
        decycle[edges[j].first.second]=1;
        return 1;
      }
    }
    for(i=0;i<N;i++){
      for(j=0;j<E;j++){
        if(decycle[edges[j].first.first])decycle[edges[j].first.second]=1;
      }
    }
    return 0;
  }
};

int main(){
  ll i,N,M,s;
  cin>>N>>M>>s;
  costmap a(N);
  a.inputmap(M);
  if(a.bellmanford(s)){cout<<"NEGATIVE CYCLE"<<endl;return 0;}
  rep(i,N){
    if(a.dist[i]!=LLONG_MAX){cout<<a.dist[i]<<endl;}
    else{cout<<"INF"<<endl;}
  }
  return 0;
}
