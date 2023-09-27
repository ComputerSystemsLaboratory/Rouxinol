#include <bits/stdc++.h>
using namespace std;
//#include <boost/multiprecision/cpp_int.hpp>
//using multiInt = boost::multiprecision::cpp_int;

using ll = long long int;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
template <typename Q_type>
using smaller_queue = priority_queue<Q_type, vector<Q_type>, greater<Q_type>>;

const int MOD_TYPE = 1;
const ll MOD = (MOD_TYPE == 1 ? (ll)(1e9 + 7) : 998244353);
const int INF = (int)1e9;
const ll LINF = (ll)4e18;
const double PI = acos(-1.0);

#define REP(i, m, n) for (ll i = m; i < (ll)(n); ++i)
#define rep(i, n) REP(i, 0, n)
#define MP make_pair
#define MT make_tuple
#define YES(n) cout << ((n) ? "YES" : "NO") << endl
#define Yes(n) cout << ((n) ? "Yes" : "No") << endl
#define Possible(n) cout << ((n) ? "Possible" : "Impossible") << endl
#define possible(n) cout << ((n) ? "possible" : "impossible") << endl
#define Yay(n) cout << ((n) ? "Yay!" : ":(") << endl
#define all(v) v.begin(), v.end()
#define NP(v) next_permutation(all(v))
#define dbg(x) cerr << #x << ":" << x << endl;

vector<int> Dx = {0, 0, -1, 1, -1, 1, -1, 1, 0};
vector<int> Dy = {1, -1, 0, 0, -1, -1, 1, 1, 0};

class kruskal
{
  static const int MAX_V = 200010;

  int par[MAX_V];
  int rank_[MAX_V];

  inline int root(int x)
  {
    return par[x] == x ? x : par[x] = root(par[x]); //経路圧縮
  }

  inline bool same(int x, int y)
  {
    return root(x) == root(y);
  }

  void unite(int x, int y)
  {
    x = root(x);
    y = root(y);
    if (x == y)
      return;

    if (rank_[x] < rank_[y])
    {
      par[x] = y;
    }
    else
    {
      par[y] = x;
      if (rank_[x] == rank_[y])
        rank_[x]++;
    }
  }

  struct edge
  {
    ll u, v, cost;
  };

  vector<edge> E;

  static bool comp(edge &e1, edge &e2)
  {
    return e1.cost < e2.cost;
  }

public:
  kruskal(int n)
  {
    for (int i = 0; i < n; ++i)
      par[i] = i, rank_[i] = 0;
  }

  inline void setE(int s, int t, ll w)
  {
    E.push_back({s, t, w});
  }

  ll calc()
  {
    sort(E.begin(), E.end(), comp);
    ll res = 0;
    for (auto e : E)
    {
      if (!same(e.u, e.v))
      {
        unite(e.u, e.v);
        res += e.cost;
      }
    }
    return res;
  }
};

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  ll v, e;
  cin >> v >> e;
  kruskal ks(v);

  rep(i, e)
  {
    ll s, t, w;
    cin >> s >> t >> w;
    ks.setE(s, t, w);
  }
  cout << ks.calc() << endl;
  return 0;
}

