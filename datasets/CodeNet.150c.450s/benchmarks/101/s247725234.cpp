#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <cmath>
#include <algorithm>
using namespace std;

void solve(){
  int n, m; cin >> n >> m;
  vector<vector<int> > v(n);
  for(int i = 0; i < m; i++){
    int u, x; cin >> u >> x;
    v[u].push_back(x);
    v[x].push_back(u);
  }
  queue<int> q;
  vector<int> c(n, 0);
  int t = 1;
  for(int j = 0; j < n; j++){
    if(c[j] == 0){
      q.push(j);
      c[j] = t;
      while(q.size() != 0){
        int x = q.front();
        q.pop();
        for(int i = 0; i < v[x].size(); i++){
          if(c[v[x][i]] == 0){
            q.push(v[x][i]);
            c[v[x][i]] = t;
          }
        }
      }
    }
    t++;
  }
  int qu; cin >> qu;
  vector<string> ans(qu);
  for(int i = 0; i < qu; i++){
    int a, b; cin >> a >> b;
    if(c[a] == c[b]) ans[i] = "yes";
    else ans[i] = "no";
  }
  for(int i = 0; i < qu; i++){
    cout << ans[i] << endl;
  }
  return;
}

int main(){
  solve();
  return 0;
}

