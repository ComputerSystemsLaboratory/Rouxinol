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
#define INF 1000000000000000000
signed main(){
  init_io();
  ll v,e,d[110][110];
  cin >> v >> e;
  for(int i=0;i<v;i++){
    for(int j=0;j<v;j++){
      if(i==j) d[i][j] = 0;
      else d[i][j] = INF;
    }
  }
  ll s,t,di;
  for(int i=0;i<e;i++){
    cin >> s >> t >> di;
    d[s][t] = di;
  }
  for(int k=0;k<v;k++){
    for(int i=0;i<v;i++){
      for(int j=0;j<v;j++){
        if(d[i][k]==INF||d[k][j]==INF) continue;
        d[i][j] = min(d[i][j],d[i][k]+d[k][j]);
      }
    }
  }
  for(int k=0;k<v;k++){
    for(int i=0;i<v;i++){
      for(int j=0;j<v;j++){
        if(d[i][k]==INF||d[k][j]==INF) continue;
        if(d[i][j]>d[i][k]+d[k][j]){
          cout <<"NEGATIVE CYCLE"<<endl;
          return 0;
        }
      }
    }
  }
  for(int i=0;i<v;i++){
    for(int j=0;j<v;j++){
      if(d[i][j] == INF) cout <<"INF";
      else cout << d[i][j];
      if(j==v-1) cout << endl;
      else cout << " ";
    }
  }
}

