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

template <typename T>
struct edge{int from, to; T cost;};

template <typename T>
struct Graph{
  int n;
  vector<T> d;
  vector<edge<T>> es;
  Graph(int n_){
    n = n_;
    d.resize(n, numeric_limits<T>::max());
  }
  void adde(edge<T> e){
    es.push_back(e);
  }
  bool bellman_ford(int s){
    T maxim = numeric_limits<T>::max();
    fill(d.begin(), d.end(), maxim);
    d[s] = 0;
    for(int i = 0; i < n; i++){
      bool update = false;
      for(auto e: es){
        if(d[e.from] != maxim && d[e.to] > d[e.from] + e.cost){
          d[e.to] = d[e.from] + e.cost;
          update = true;
          if(i == n - 1)return false;
        }
      }
      if(!update)break;
    }
    return true;
  }
};

int main(int argc, char const* argv[])
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n, m, r;
  cin >> n >> m >> r;
  Graph<ll> graph(n);
  rep(i, m){
    int a, b, d;
    cin >> a >> b >> d;
    graph.adde(edge<ll>{a, b, d});
  }
  int t = graph.bellman_ford(r);
  if(!t)cout << "NEGATIVE CYCLE" << endl;
  else {
    rep(i, n){
      if(graph.d[i] != numeric_limits<ll>::max())cout << graph.d[i] << endl;
      else cout << "INF" << endl;
    }
  }
	return 0;
}

