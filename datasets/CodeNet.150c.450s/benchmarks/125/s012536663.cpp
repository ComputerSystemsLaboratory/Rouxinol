#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int curTime = 1;
void dfs(int cur, const vector<vector<bool> >& a, vector<int>& d, vector<int>& f, vector<bool>& visited){
  visited[cur] = true;
  d[cur] = curTime;
  curTime++;
  // cerr << "visiting [" << cur << "], time = " << curTime << endl;

  for(int dst = 1; dst <= a.size(); dst++){
    if(a[cur][dst] && !visited[dst]) {// cur????????¶??????????????????????????????
      dfs(dst, a, d, f, visited);
    }
  }
  f[cur] = curTime;
  curTime++;
  return;
}

int main(){
  int n;
  cin >> n;
  vector<vector<bool> > a(n+1, vector<bool>(n+1, false));
  for(int i = 1; i <= n; i++){
    int u;
    cin >> u;
    int k;
    cin >> k;
    for(int j = 0; j < k; j++){
      int v;
      cin >> v;
      a[i][v] = true;
    }
  }

  vector<bool> visited(n+1, false);
  vector<int> d(n+1), f(n+1);

  for(int i = 1; i <= n; i++){
    if(!visited[i]){
      dfs(i, a, d, f, visited);
    }
  }

  for(int i = 1; i <= n; i++){
    cout << i << " " << d[i] << " " << f[i] << endl;
  }
  return 0;
}