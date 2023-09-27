#include <algorithm>
#include <bitset>
#include <cassert>
#include <cmath>
#include <ctime>
#include <cstring>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>

#define rep(i,n)   for (int i = 0; i < (n); ++i)
#define sort(a)    sort((a).begin(), (a).end());
#define uniq(a)    SORT(a);(a).erase(unique((a).begin(), (a).end()), (a).end());
#define find(a,x)  find((a).begin(), (a).end(), (x)) != (a).end()
#define reverse(a) reverse((a).begin(), (a).end());
#define out(d) cout << (d);
#define outl(d) std::cout<<(d)<<"\n";
#define Yes() printf("Yes\n");
#define No() printf("No\n");
#define YES() printf("YES\n");
#define NO() printf("NO\n");
#define ceil(x, y) ((x + y - 1) / (y))

using namespace std;
using ll = long long;
using P = pair<ll,ll>;

static const ll MOD = 1000000007; // 10^9 + 7
static const int MAX = 100000;
static const int NIL = -1;

int n;
vector<int> G[MAX];
int color[MAX];

void dfs(int r, int c) {
  stack<int> S;
  S.push(r);
  color[r] = c;

  while (!S.empty()) {
    int u = S.top(); S.pop();
    for (int i = 0; i < G[u].size(); i++) {
      int v = G[u][i];
      if (color[v] == NIL) {
        color[v] = c;
        S.push(v);
      }
    }
  }
}

void assignColor() {
  int id = 1;
  rep(i, n) color[i] = NIL;
  rep(u, n) {
    if (color[u] == NIL) dfs(u, id++);
  }
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  srand((unsigned)time(NULL));

  int s, t, m, q;
  cin >> n >> m;

  rep(i, m) {
    cin >> s >> t;
    G[s].push_back(t);
    G[t].push_back(s);
  }

  assignColor();

  cin >> q;

  rep(i, q) {
    cin >> s >> t;
    if (color[s] == color[t]) {
      cout << "yes" << endl;
    } else {
      cout << "no" << endl;
    }
  }
}

