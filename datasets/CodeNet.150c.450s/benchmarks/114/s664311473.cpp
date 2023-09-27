#include <bits/stdc++.h>
#define MAX 20000
using namespace std;

int main(void){
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n; cin >> n;
  vector< vector<int> > v(n, vector<int>(n));
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cin >> v[i][j];
      if(v[i][j] == -1) v[i][j] = MAX;
    }
  }

  vector<int> cost(n, MAX), used(n, false);
  cost[0] = 0;
  int ans = 0;
  int t;

  while(true){
    t = -1;
    for(int i = 0; i < n; i++){
      if(!used[i] && (t == -1 || cost[t] > cost[i])) t = i;
    }
    if(t == -1) break;
    used[t] = true;
    ans += cost[t];

    for(int i = 0; i < n; i++){
      cost[i] = min(cost[i], v[t][i]);
    }
  }

  cout << ans << endl;

  return 0;
}