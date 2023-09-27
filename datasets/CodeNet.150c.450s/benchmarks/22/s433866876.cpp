#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <time.h>
#include <list>
#include <bitset>

using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);++i)
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define reps(x,c) for(auto x:c)
#define all(x) begin(x), end(x)
#define pb(a) emplace_back(a) 
#define mp(a,b) make_pair((a),(b))
#define pl pair<ll,ll>
#define INF 2147483600
#define MOD 1000000007
#define fi first
#define se second
#define dbg(x) cout << #x"="<< (x) << endl
#define dbgv(x) cout<<#x<<endl;reps(y,x){cout<<y<<" ";}cout<<endl

const ll V=1010;
ll dist[V],n;
using P=pair<int,int>;
vector<P> G[V];

bool bellman_ford(int s) {
  fill_n(dist,V,1e18);
  dist[s] = 0;
  rep(i,n){
    rep(v,n){
      for(P e:G[v]) {
        if (dist[v] != 1e18 && dist[e.second] > dist[v] + e.first) {
          dist[e.second] = dist[v] + e.first;
          if (i == n - 1) return true; // n回目にも更新があるなら負の閉路が存在
        }
      }
    }
  }
  return false;
}

int main(){
  ll e,r;cin>>n>>e>>r;
  ll s,t,d;
  rep(i,e){
    cin>>s>>t>>d;
    G[s].emplace_back(P(d,t));
  }
  if(bellman_ford(r)){
    cout<<"NEGATIVE CYCLE"<<endl;
    return 0;
  }

  rep(i,n){
    if(dist[i]>1e10){
      cout<<"INF"<<endl;
    }else{
      cout<<dist[i]<<endl;
    }
  }
  return 0;
}
