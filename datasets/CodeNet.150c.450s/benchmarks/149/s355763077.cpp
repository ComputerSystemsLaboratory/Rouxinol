/* {{{ Shinobu kawaii */
/*
  ______   __        _                  __                 
.' ____ \ [  |      (_)                [  |                
| (___ \_| | |--.   __   _ .--.   .--.  | |.--.   __   _   
 _.____`.  | .-. | [  | [ `.-. |/ .'`\ \| '/'`\ \[  | | |  
| \____) | | | | |  | |  | | | || \__. ||  \__/ | | \_/ |, 
 \______.'[___]|__][___][___||__]'.__.'[__;.__.'  '.__.'_/ 
                                                           
*/
/* }}} */

#include <bits/stdc++.h>
using namespace std;

// #define int long long

/* cpp template {{{ */

/* short */
#define pb push_back
#define mp make_pair
#define print(x) cout << x << '\n'
#define Fi first
#define Se second

/* REPmacro */
#define REPS(i, a, n) for (int i = (a); i < (n); i++)
#define REP(i, n) for (int i = 0; i < (n); i++)
#define RREP(i, n) for (int i = 1; i <= (n); i++)
#define DEPS(i, a, n) for (int i = (a); i >= n; i--)
#define DEP(i, n) for (int i = (n); i >= 0; i--)

/* typedef */
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vector<int> > vii;
typedef pair<int, int> pii;

/* const */
const int INF = 999999999;
const double EPS = 1e-9;
const int dx[] = {0, 1, 0, -1, 1, -1, 1, -1}, dy[] = {1, 0, -1, 0, 1, -1, -1, 1};

/* func */
inline bool is_uruu(int y) {return y % 4 == 0 && y % 100 != 0 || y % 400 == 0;}
inline bool inside(int y, int x, int H, int W) {return y >= 0 && x >= 0 && y < H && x < W;}

/* }}} */

struct UnionFind {
  vi par;
  vi rank;

  UnionFind(int n) : par(n), rank(n, 0) {
    REP(i, n) par[i] = i;
  }

  int root(int x) {
    return par[x] == x ? x : par[x] = root(par[x]);
  }

  bool same(int x, int y) {
    return root(x) == root(y);
  }

  void unite(int x, int y) {
    x = root(x);
    y = root(y);
    if (x == y) return;

    if (rank[x] < rank[y]) {
      par[x] = y;
    } else {
      par[y] = x;
      if (rank[x] == rank[y]) rank[x]++;
    }
  }
};

signed main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n, q; cin >> n >> q;
  UnionFind uni(n);

  REP(i, q) {
    bool a;
    int b, c;
    cin >> a >> b >> c;
    if (a) {
      print(uni.same(b, c));
    } else {
      uni.unite(b, c);
    }
  }

  return 0;
}