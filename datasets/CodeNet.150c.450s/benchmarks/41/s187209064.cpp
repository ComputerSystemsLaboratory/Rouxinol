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
struct Graph_ {
  int n;
  vector<vector<T> > d;
  vector<vector<int> > path;
  Graph_(int ns) {
    n = ns;
    d = vector<vector<T> >(n, vector<T>(n, numeric_limits<T>::max() / 10));
    path = vector<vector<int> >(n, vector<int>(n, -1));
    for(int i = 0; i < n; i++)d[i][i] = 0;
  }
  void warshall_floyd(){
    for(int k = 0; k < n; k++){
      for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
          if(d[i][j] > d[i][k] + d[k][j]){
            d[i][j] = d[i][k] + d[k][j];
            path[i][j] = k;
          }
        }
      }
    }
  }
  void adde(int at, int to, T cost){
    d[at][to] = cost;
  }
};

typedef struct Graph_<int> GraphI;
typedef struct Graph_<ll> GraphL;


int main(int argc, char const* argv[])
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n, m;
  cin >> n >> m;
  GraphL graph(n);
  rep(i, m){
    int a, b, d;
    cin >> a >> b >> d;
    graph.adde(a, b, d);
  }
  graph.warshall_floyd();
  rep(i, n){
    if(graph.d[i][i] < 0){
      cout << "NEGATIVE CYCLE" << endl;
      return 0;
    }
  }
  rep(i, n){
    rep(j, n){
      if(graph.d[i][j] >= numeric_limits<ll>::max() / 100)cout << "INF";
      else cout << graph.d[i][j];
      cout << "\n "[j + 1 != n];
    }
  }
	return 0;
}

