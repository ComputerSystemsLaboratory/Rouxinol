#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <cmath>
#include <algorithm>
using namespace std;
static const long long inf = (1LL<<32);

void solve(){
  int v, e; cin >> v >> e;
  vector<vector<long long> > a(v + 1, vector<long long>(v + 1));
  for(int i = 1; i <= v; i++){
    for(int j = 1; j <= v; j++){
      if(i == j) a[i][j] = 0;
      else a[i][j] = inf;
    }
  }

  for(int i = 0; i < e; i++){
    long long s, t, d; cin >> s >> t >> d;
    a[s + 1][t + 1] = d;
  }

  for(int k = 1; k <= v; k++){
    for(int i = 1; i <= v; i++){
      if(a[i][k] == inf) continue;
      for(int j = 1; j <= v; j++){
        if(a[k][j] == inf) continue;
        a[i][j] = min(a[i][j], a[i][k] + a[k][j]);
      }
    }
  }
  bool ng = false;
  for(int i = 1; i <= v; i++){
    if(a[i][i] < 0) ng = true;
  }
  if(ng){
    cout << "NEGATIVE CYCLE\n";
    return;
  }

  for(int i = 1; i <= v; i++){
    for(int j = 1; j <= v; j++){
      if(j < v){
        if(a[i][j] == inf) cout << "INF ";
        else cout << a[i][j] << " ";
      }
      else{
        if(a[i][j] == inf) cout << "INF\n";
        else cout << a[i][j] << endl;
      }
    }
  }
  return;
}

int main(){
  solve();
  return 0;
}

