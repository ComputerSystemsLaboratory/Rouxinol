

#include<bits/stdc++.h>
using namespace std;
#define inf INT_MAX
#define INF LLONG_MAX
#define ll long long
#define ull unsigned long long
#define M (int)(1e9+7)
#define P pair<int,int>
#define FOR(i,m,n) for(int i=(int)m;i<(int)n;i++)
#define RFOR(i,m,n) for(int i=(int)m;i>=(int)n;i--)
#define rep(i,n) FOR(i,0,n)
#define rrep(i,n) RFOR(i,n,0)
#define all(a) a.begin(),a.end()
const int vx[4] = {0,1,0,-1};
const int vy[4] = {1,0,-1,0};
#define F first
#define S second
#define PB push_back
#define EB emplace_back
#define int ll
#define vi vector<int>
#define IP pair<int,P>
#define PI pair<P,int>
#define PP pair<P,P>
#define Yes(f){cout<<(f?"Yes":"No")<<endl;}
#define YES(f){cout<<(f?"YES":"NO")<<endl;}
int Madd(int x,int y) {return (x+y)%M;}
int Msub(int x,int y) {return (x-y+M)%M;}
int Mmul(int x,int y) {return (x*y)%M;}




template< typename T >
struct edge {
  int src, to;
  T cost;

  edge(int to, T cost) : src(-1), to(to), cost(cost) {}

  edge(int src, int to, T cost) : src(src), to(to), cost(cost) {}

  edge &operator=(const int &x) {
    to = x;
    return *this;
  }

  operator int() const { return to; }
};

template< typename T >
using Edges = vector< edge< T > >;
template< typename T >
using WG = vector< Edges< T > >;
using UG = vector< vector< int > >;
template< typename T >
using Matrix = vector< vector< T > >;


template< typename T >
vector< T > bellman_ford(Edges< T > &edges, int V, int s) {
  //const auto INF = numeric_limits< T >::max();
  vector< T > dist(V, INF);
  dist[s] = 0;
  for(int i = 0; i < V - 1; i++) {
    for(auto &e : edges) {
      if(dist[e.src] == INF) continue;
      dist[e.to] = min(dist[e.to], dist[e.src] + e.cost);
    }
  }
  for(auto &e : edges) {
    if(dist[e.src] == INF) continue;
    if(dist[e.src] + e.cost < dist[e.to]) return vector< T >();
  }
  return dist;
}

signed main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  cout<<fixed<<setprecision(20);

  int n,m,s;
  cin>>n>>m>>s;
  Edges<int> es;
  rep(i,m){
    int a,b,c;
    cin>>a>>b>>c;
    es.PB(edge<int>(a,b,c));
  }

  vi res=bellman_ford(es,n,s);

  if(res.empty()){
    cout<<"NEGATIVE CYCLE"<<endl;
  }else{
    for(int x:res){
      if(x==INF){
        cout<<"INF"<<endl;
      }else{
        cout<<x<<endl;
      }
    }
  }


}
