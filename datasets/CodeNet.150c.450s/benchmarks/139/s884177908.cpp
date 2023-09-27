#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define ALL(x) (x).begin(), (x).end()
typedef long long ll;
typedef pair<int, int> pii;
const int INF = 1e9;
const int MOD = 1000000007;
const double PI = acos(-1);
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

vector<int> cnt;
vector<pii> ans;

int n, m;
vector<vector<int>> tree;

void bfs() {
  queue<int> q;
  q.push(0);
  cnt[0] = 1;
  ans[0] = pii(-1,0);
  while(!q.empty()) {
    int i = q.front();
    q.pop();
    for(int j: tree[i]) {
      if (cnt[j]) continue;
      cnt[j] = 1;
      ans[j] = pii(i, ans[i].second);
      q.push(j);
    }
  }
}

void solve() {
  cin >> n >> m;
  tree.resize(n);
  cnt.resize(n);
  ans.resize(n);
  rep(i,m) {
    int a, b;
    cin >> a >> b;
    a--, b--;
    tree[a].push_back(b);
    tree[b].push_back(a);
  }

  bfs();
  bool b = true;
  rep(i,n) if (!cnt[i]) b = false;
  if (!b) cout << "No" << endl;
  else {
    cout << "Yes" << endl;
    rep(i,n-1) cout << ans[i+1].first + 1 << endl;
  }

}

int main() {
  solve();
  return 0;
}