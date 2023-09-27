#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vvi = vector<vector<int>>;
#define rep(i,n) for(int i=0;i<(int)(n);i++)

vector<vector<int>> G(2e5);
vector<int> ans(2e5,-1);
vector<bool> seen(2e5,false);

void bfs() {
  queue<int> Q;
  Q.push(1);
  seen[1]=true;
  int u;
  while(!Q.empty()) {
    u=Q.front(); Q.pop();
    for(int next:G[u]) {
      if(seen[next]==false) {
        Q.push(next);
        seen[next]=true;
        ans[next]=u;
      }
    }
  }
}

int main() {
  int n,m; cin>>n>>m;
  int a,b;
  rep(i,m) {
    cin>>a>>b;
    G[a].push_back(b);
    G[b].push_back(a);
  }
  bfs();
  cout<<"Yes\n";
  for(int i=2;i<=n;i++) {
    cout<<ans[i]<<endl;
  }
}
