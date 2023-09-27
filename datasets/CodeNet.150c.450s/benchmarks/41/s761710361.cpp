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
const ll inf=1ll<<60;

ll dp[110][110];

int main(){
  int n,m;
  cin >> n >> m;
  vector<tiii> edges;
  rep(i,n)rep(j,n) dp[i][j]=inf;
  rep(i,n) dp[i][i]=0;
  rep(i,m){
    int a,b,c;
    cin >> a >> b >> c;
    edges.emplace_back(a,b,c);
    dp[a][b]=c;
  }
  vector<ll> dist(n,inf);
  dist[0]=0;
  bool update=true;
  int step=0;
  while(update){
    update=false;
    rep(i,m){
      int a,b,c;
      tie(a,b,c)=edges[i];
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
  rep(k,n){
    rep(i,n){
      rep(j,n){
        if(dp[i][k]!=inf&&dp[k][j]!=inf) chmin(dp[i][j],dp[i][k]+dp[k][j]);
      }
    }
  }
  rep(i,n){
    rep(j,n){
      if(dp[i][j]<inf) cout << dp[i][j];
      else cout << "INF";
      if(j<n-1) cout << " ";
    }cout << endl;
  }
}

