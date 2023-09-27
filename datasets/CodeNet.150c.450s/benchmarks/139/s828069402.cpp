#include<bits/stdc++.h>
#define rep(i,n) for (int i=0; i<n; i++)
#define REP(i,x,n) for (int i=x; i<n; i++)
using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;
using ll = long long;

int INF = 1001001001;

int main(){
  int n, m;
  cin >> n >> m;
  vvi to(n);
  rep(i,m){
    int a, b;
    cin >> a >> b;
    a--; b--;
    to.at(a).push_back(b);
    to.at(b).push_back(a);
  }
  // rep(i,n){
  //   cout << i << " ";
  //   for (auto u : to.at(i)){
  //     cout << u << " ";
  //   }
  //   cout << endl;
  // }

  queue<int> q;
  vi dist(n, INF);
  vi pre(n, -1);
  dist.at(0) = 0;
  q.push(0);
  while (!q.empty()){
    int v = q.front(); q.pop();
    for (int u : to.at(v)){
      if (dist.at(u) != INF) continue;
      dist.at(u) = dist.at(v) + 1;
      pre.at(u) = v;
      q.push(u);
    }
  }

  cout << "Yes" << endl;
  rep(i,n){
    if (i == 0) continue;
    int ans = pre.at(i);
    ans++;
    cout << ans << endl;
  }
  return 0;
}
