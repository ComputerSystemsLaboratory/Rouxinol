#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 10e17
#define rep(i,n) for(long long i=0; i<n; i++)
#define repr(i,n,m) for(long long i=m; i<n; i++)
#define mod 1000000007
#define sorti(x) sort(x.begin(), x.end())
#define sortd(x) sort(x.begin(), x.end(), std::greater<long long>())
#define debug(x) std::cerr << (x) << std::endl;
#define roll(x) for (auto&& itr : x) { cerr << (itr) << " "; }

template <class T> inline void chmax(T &ans, T t) { if (t > ans) ans = t;}
template <class T> inline void chmin(T &ans, T t) { if (t < ans) ans = t;}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N,M;
  cin >> N >> M;
  queue<int> que;
  vector<vector<int>> G(N+1);
  repr(i, M, 0) {
    int a,b;
    cin >> a >> b;
    G[a].push_back(b);
    G[b].push_back(a);
  }

  vector<int> dist(N+1, numeric_limits<int>::max());
  que.push(1);
  dist[1] = 0;
  while (!que.empty()) {
    int now = que.front();
    que.pop();

    for (auto to : G[now]) {
      if (dist[to] == numeric_limits<int>::max()) {
        dist[to] = now;
        que.push(to);
      }
    }
  }

  cout << "Yes" << endl;
  for (int i = 2; i <= N; ++i) {
    cout << dist[i] << endl;
  }
}