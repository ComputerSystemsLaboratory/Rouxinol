#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000000

int main(void){
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n; cin >> n;
  vector< vector<int> > f(n, vector<int>(n, MAX));
  for(int i = 0; i < n; i++){
    int u, k; cin >> u >> k;
    for(int j = 0; j < k; j++){
      int v, c; cin >> v >> c;
      f[u][v] = c;
    }
  }

  vector<int> d(n,MAX);
  vector<bool> used(n, false);
  d[0] = 0;
  while(true){
    int t = -1;
    for(int i = 0; i < n; i++){
      if(!used[i] && (t == -1 || d[t] > d[i])) t = i;
    }
    if(t == -1) break;
    used[t] = true;

    for(int i = 0; i < n; i++){
      d[i] = min(d[i], d[t] + f[t][i]);
    }
  }

  for(int i = 0; i < n; i++){
    cout << i << " " << d[i] << endl;
  }
  return 0;
}