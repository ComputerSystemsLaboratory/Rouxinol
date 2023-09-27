#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
#define repr(i, n) for(int i = n; i >= 0; i--)
#define reps(i,a,b) for(int i= a; i < b; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
int main()
{
  ll n,m;
  cin >> n >> m;
  vector<ll> dist(n+1, -1);
  vector<vector<ll>> g(n+1, vector<ll>());

  rep(i, m) {
    int a, b;
    cin >> a >> b;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  queue<int> que;
  que.push(1);
  dist[1] = 0;
  vector<ll> sig(n+1, -1);
  while(!que.empty()) {
    ll v = que.front();
    que.pop();
    rep(i, (int)g.at(v).size()) {
      ll nv = g.at(v).at(i);
      if (dist[nv] == -1) {
        dist[nv] = dist[v] + 1;
        sig.at(nv) = v;
        que.push(nv);
      } else if(dist[nv] > dist[v] + 1) {
        sig.at(nv) = v;
        dist[nv] = dist[v] + 1;
        que.push(nv);
      }
    }
  }
  bool ok = true;
  reps(i, 2, n+1) {
    if (dist[i] == -1) ok = false;
  }
  if (ok) {
    cout << "Yes" << endl;
    reps(i, 2, n+1) cout << sig[i] << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
