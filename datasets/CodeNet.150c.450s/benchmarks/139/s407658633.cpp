#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;

int main(){
  int n,m;
  cin >> n >> m;
  vvi g(n+1);
  rep(i,m){
    int a,b;
    cin >> a >> b;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  vi dist(n+1, -1);
  queue<int> que;
  vi ans(n+1);
  dist[1] = 0;
  que.push(1);
  while(!que.empty()){
    int v = que.front();
    que.pop();
    for(auto nv : g[v]){
      if(dist[nv] != -1) continue;
      dist[nv] = dist[v] + 1;
      que.push(nv);
      ans[nv] = v;
    }
  }
  cout << "Yes" << endl;
  for(int i=2; i<=n; i++) cout << ans[i] << endl;
}
