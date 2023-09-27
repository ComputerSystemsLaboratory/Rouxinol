#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <cmath>
#include <algorithm>
using namespace std;

void solve(){
  int n; cin >> n;
  vector<vector<int> > v(n, vector<int>(n, -1));
  for(int i = 0; i < n; i++){
    int u, k; cin >> u >> k;
    for(int j = 0; j < k; j++){
      int a, b; cin >> a >> b;
      v[u][a] = b;
    }
  }
  vector<int> t, c(n), d(n, 10000000);
  d[0] = 0;
  while(t.size() != n){
    int mini, mind = 10000000;
    for(int i = 0; i < n; i++){
      if(c[i] == 0){
        if(d[i] < mind){
          mini = i;
          mind = d[i];
        }
      }
    }
    t.push_back(mini);
    c[mini] = 1;
    for(int i = 0; i < n; i++){
      if(v[mini][i] >= 0 && c[i] == 0) d[i] = min(v[mini][i] + d[mini], d[i]);
    }
  }
  for(int i = 0; i < n; i++){
    cout << i << " " << d[i] << endl;
  }
  return;
}

int main(){
  solve();
  return 0;
}

