#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <cmath>
#include <algorithm>
using namespace std;

void solve(){
  int n; cin >> n;
  vector<vector<int> > v(n, vector<int>(n));
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cin >> v[i][j];
    }
  }
  vector<int> t, c(n);
  t.push_back(0);
  c[0] = 1;
  int ans = 0;
  while(t.size() != n){
    int mini, minj, mint = 100000;
    for(int i = 0; i < t.size(); i++){
      for(int j = 0; j < n; j++){
        if(v[t[i]][j] >= 0 && c[j] == 0){
          if(v[t[i]][j] < mint){
            mini = i;
            minj = j;
            mint = v[t[i]][j];
          }
        }
      }
    }
    ans += mint;
    t.push_back(minj);
    c[minj] = 1;
  }
  cout << ans << endl;
  return;
}

int main(){
  solve();
  return 0;
}

