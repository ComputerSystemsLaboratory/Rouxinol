#include<bits/stdc++.h>

using namespace std;

vector<int> bfs(vector<vector<int>> edges) {
  int n = edges.size()-1, ptr=0, zeros=n-1;
  vector<bool> marked(n+1, false);
  vector<int> q, path, sign(n+1, -1);
  marked[1] = true;
  q.push_back(1);
  path.push_back(0);
  while(ptr < q.size()) {
    int v = q[ptr], len = path[ptr];
    for (auto e: edges[v]) {
      if (!marked[e]) {
        marked[e] = true;
        q.push_back(e);
        path.push_back(len+1);
        sign[e] = v;
        zeros--;
      }
    }
    ptr++;
  }
  if (zeros) sign.resize(1);
  return sign;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, m, a, b;
  cin>>n>>m;
  vector<vector<int>> edges(n+1, vector<int> (0));
  for (int i=0; i<m; i++) {
    cin>>a>>b;
    edges[a].push_back(b);
    edges[b].push_back(a);
  }
  vector<int> sign = bfs(edges);
  if (sign.size() == 1) cout<<"No\n";
  else {
    cout<<"Yes\n";
    for (int i=2; i<=n; i++) {
      cout<<sign[i]<<'\n';
    }
  }
}