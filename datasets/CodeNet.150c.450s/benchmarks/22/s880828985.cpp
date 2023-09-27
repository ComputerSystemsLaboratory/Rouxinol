// I SELL YOU...! 
#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<queue>
#include<chrono>
#include<iomanip>
#include<map>
#include<set>
using namespace std;
using ll = long long;
using P = pair<ll,ll>;
void init_io(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  cout << setprecision(10);
}
#define INF 1000000000
#define MINF -INF
#define MAX 1100
ll d[MAX];
vector<P> G[MAX];
signed main(){
  init_io();
  ll v,e,r;
  cin >> v >> e >> r;
  ll s,t,di;
  for(int i=0;i<e;i++){
    cin >> s >> t >> di;
    G[s].push_back(P(t,di));
  }
  fill(d,d+MAX,INF);
  d[r] = 0;
  for(int c=0;c<v;c++){
    for(int i=0;i<v;i++){
      if(d[i]==INF) continue;
      for(auto nv:G[i]){
        if(d[i]+nv.second<d[nv.first]){
          d[nv.first] = d[i]+nv.second;
        }
      }
    }
  }
  for(int c=0;c<v;c++){
    for(int i=0;i<v;i++){
      if(d[i]==INF) continue;
      for(auto nv:G[i]){
        if(d[i]+nv.second<d[nv.first]){
          d[nv.first] = MINF;
        }
      }
    }
  }
  for(int i=0;i<v;i++){
    if(d[i]==MINF){
      cout << "NEGATIVE CYCLE\n";
      return 0;
    }
  }
  for(int i=0;i<v;i++){
    if(d[i]==INF) cout << "INF\n";
    else cout << d[i] << endl;
  }
}

