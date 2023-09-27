// includes
#include <bits/stdc++.h>

// macros
#define ll long long int
#define pb emplace_back
#define mk make_pair
#define pq priority_queue
#define FOR(i, a, b) for(int i=(a);i<(b);++i)
#define rep(i, n) FOR(i, 0, n)
#define rrep(i, n) for(int i=((int)(n)-1);i>=0;i--)
#define all(x) (x).begin(),(x).end()
#define sz(x) ((int)(x).size())
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end())
#define FI first
#define SE second
using namespace std;

//  types
typedef pair<int, int> P;
typedef pair<ll, int> Pl;
typedef pair<ll, ll> Pll;
typedef pair<double, double> Pd;
 
// constants
const int inf = 1e9;
const ll linf = 1LL << 50;
const double EPS = 1e-10;
const int mod = 1e9 + 7;

// solve
template <class T>bool chmax(T &a, const T &b){if(a < b){a = b; return 1;} return 0;}
template <class T>bool chmin(T &a, const T &b){if(a > b){a = b; return 1;} return 0;}
template <typename T> istream &operator>>(istream &is, vector<T> &vec){for(auto &v: vec)is >> v; return is;}

typedef struct UnionFind_ {
  vector<int> par;
  vector<int> rank_;
  UnionFind_(int n): rank_(n, 0) {
    for(int i = 0; i < n; i++)par.push_back(i);
  }
  int find(int x) {
    if(par[x] == x)return x;
    else return par[x] = find(par[x]);
  }
  bool same(int x, int y) {
    if(find(x) == find(y))return true;
    else return false;
  }
  bool unite(int x, int y){
    int xp = find(x);
    int yp = find(y);
    if(xp == yp)return false;
    if(rank_[xp] > rank_[yp])par[yp] = xp;
    else if(rank_[xp] < rank_[yp])par[xp] = yp;
    else {
      par[yp] = xp;
      rank_[xp]++;
    }
    return true;
  }
} UnionFind;

int main(int argc, char const* argv[])
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n, q;
  cin >> n >> q;
  UnionFind uf(n);
  rep(i, q){
    int c, x, y;
    cin >> c >> x >> y;
    if(c == 0)uf.unite(x, y);
    else {
      if(uf.same(x, y))cout << 1 << endl;
      else cout << 0 << endl;
    }
  }
	return 0;
}

