#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < (b); i++)
#define rrep(i, a, b) for (int i = a; i >= (b); i--)
#define all(x) (x).begin(), (x).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;
template <class T>
inline bool chmin(T& a, T b) {
   if (a > b) {
      a = b;
      return true;
   }
   return false;
}
template <class T>
inline bool chmax(T& a, T b) {
   if (a < b) {
      a = b;
      return true;
   }
   return false;
}
void hr() {
   cerr << "--------------" << endl;
}
const int INF = 1001001001;
const int MOD = 1000000007;

vector<int> to[100000];
int color[100000];
void dfs(int u, int c) {
   color[u] = c;
   for (int v : to[u]) {
      if (color[v] == INF) dfs(v, c);
   }
}

int main() {
   cin.tie(0);
   ios_base::sync_with_stdio(0);

   int n, m;
   cin >> n >> m;
   rep(i, 0, m) {
      int s, t;
      cin >> s >> t;
      to[s].push_back(t);
      to[t].push_back(s);
   }
   rep(i, 0, n) color[i] = INF;
   int c = 0;
   rep(i, 0, n) {
      if (color[i] == INF) {
         dfs(i, c++);
      }
   }
   int q;
   cin >> q;
   rep(i, 0, q) {
      int s, t;
      cin >> s >> t;
      if (color[s] == color[t])
         cout << "yes" << endl;
      else
         cout << "no" << endl;
   }
   return 0;
}
