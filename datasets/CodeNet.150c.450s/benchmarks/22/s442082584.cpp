#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmax(T& a,T b){if(a<b){a=b;return 1;} return 0;}
template<class T> inline bool chmin(T& a,T b){if(a>b){a=b;return 1;} return 0;}
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define all(vec) vec.begin(),vec.end()
typedef long long ll;
typedef pair<ll,ll> pll;
typedef pair<int,int> pii;
typedef tuple<ll,ll,ll> tlll;
typedef tuple<int,int,int> tiii;
const ll mod=1e9+7;
const int inf=1<<30;

vector<int> to[2510];
bool reachablefroms[2510];
bool ok[2510];

void dfs(int v){
  if(reachablefroms[v]) return;
  reachablefroms[v]=1;
  for(int nv:to[v]){
    dfs(nv);
  }
}

int main(){
  int n,m,s;
  cin >> n >> m >> s;
  vector<tiii> edges;
  rep(i,m){
    int a,b,c;
    cin >> a >> b >> c;
    edges.emplace_back(a,b,c);
    to[a].push_back(b);
  }
  dfs(s);
  // bellman-ford
  vector<int> dist(n,inf);
  dist[s]=0;
  bool update=true;
  int step=0;
  while(update){
    update=false;
    rep(i,m){
      int a,b,c;
      tie(a,b,c)=edges[i];
      if(!(reachablefroms[a]&&reachablefroms[b])) continue;
      if(dist[a]+c<dist[b]){
        update=true;
        dist[b]=dist[a]+c;
      }
    }
    step++;
    if(step>n){
      cout << "NEGATIVE CYCLE" << endl;
      return 0;
    }
  }
  rep(i,n){
    if(dist[i]==inf){
      cout << "INF" << endl;
    }
    else{
      cout << dist[i] << endl;
    }
  }
}

