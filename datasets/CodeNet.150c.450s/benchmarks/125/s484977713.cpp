#include <bits/stdc++.h>
using namespace std;
vector<int> d;
vector<int> f;
vector<bool> used;
vector< vector<int> > v;
int n;
int cnt = 1;

void dfs(int pos){
  d[pos] = cnt; cnt++;
  used[pos] = true;
  for(int i = 0; i < n; i++){
    if(v[pos][i] && !used[i]){
      dfs(i);
    }
  }
  f[pos] = cnt; cnt++;
}

int main(void){
  ios::sync_with_stdio(false);
  cin.tie(0);

  cin >> n;
  d = f = vector<int>(n, -1);
  used = vector<bool>(n, false);
  v = vector< vector<int> >(n, vector<int>(n, 0));
  for(int i = 0; i < n; i++){
    int u, k; cin >> u >> k;
    u--;
    for(int j = 0; j < k; j++){
      int a; cin >> a;
      a--;
      v[u][a] = 1;
    }
  }
  for(int i = 0; i < n; i++)
    if(!used[i]) dfs(i);
  for(int i = 0; i < n; i++){
    cout << i+1 << " " << d[i] << " " << f[i] << endl;
  }

  return 0;
}