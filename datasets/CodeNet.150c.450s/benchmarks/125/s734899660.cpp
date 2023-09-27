#include <iostream>
#include <vector>
#define eol '\n'
using namespace std;

vector< vector<int> > list;
vector<int> d, f;
int t;

void dfs(int v) {
  if (d[v] != 0) {
    return;
  }
  
  d[v] = t++;
  for (int i = 0; i < list[v].size(); i++) {
    int visit = list[v][i];
    dfs(visit);
  }
  f[v] = t++;
}
  

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  t = 1;
  
  int n;
  cin >> n;

  list.resize(n+1);
  d.resize(n+1, 0);
  f.resize(n+1, 0);

  for (int i = 0; i < n; i++) {
    int u,k;
    cin >> u >> k;
    
    vector<int> row(k);
    for (int j = 0; j < k; j++) {
      cin >> row[j];
    }
    
    list[u] = row;
  }

  for (int i = 1; i <= n; i++) {
    dfs(i);
  }
  
  for (int i = 1; i <= n; i++) {
    cout << i << " " << d[i] << " " << f[i] << eol;
  }

  return 0;
}