#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, m;
  cin >> n >> m;
  vector<set<int>> E(n);
  for (int i = 0; i < m; i++){
    int s, t;
    cin >> s >> t;
    E[s].insert(t);
    E[t].insert(s);
  }
  vector<int> G(n, -1);
  for (int i = 0; i < n; i++){
    if (G[i] == -1){
      queue<int> Q;
      Q.push(i);
      G[i] = i;
      while (!Q.empty()){
        int v = Q.front();
        Q.pop();
        for (int w : E[v]){
          if (G[w] == -1){
            G[w] = G[v];
            Q.push(w);
          }
        }
      }
    }
  }
  int q;
  cin >> q;
  for (int i = 0; i < q; i++){
    int s, t;
    cin >> s >> t;
    if (G[s] == G[t]){
      cout << "yes" << endl;
    } else {
      cout << "no" << endl;
    }
  }
}
