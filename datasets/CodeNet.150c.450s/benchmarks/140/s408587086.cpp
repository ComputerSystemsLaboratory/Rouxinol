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
struct Graph{
  int n;
  vector<vector<pair<int, T> > > es;
  vector<T> mincost;
  vector<bool> used;
  Graph(int n_){
    n = n_;
    es.resize(n);
    mincost.resize(n);
    used.resize(n);
  }
  void adde(int from, int to, T cost){
    es[from].push_back(make_pair(to, cost));
    es[to].push_back(make_pair(from, cost));
  }
  T prim(){
    fill(mincost.begin(), mincost.end(), numeric_limits<T>::max());
    fill(used.begin(), used.end(), false);
    T res = 0;
    priority_queue<pair<T, int>, vector<pair<T, int> >, greater<pair<T, int> > > pq;
    mincost[0] = 0;
    pq.push(make_pair(0, 0));
    while(!pq.empty()){
      pair<T, int> p = pq.top(); pq.pop();
      if(used[p.second])continue;
      used[p.second] = true;
      res += p.first;
      for(auto e: es[p.second]){
        if(!used[e.first] && mincost[e.first] > e.second){
          mincost[e.first] = e.second;
          pq.push(make_pair(mincost[e.first], e.first));
        }
      }
    }
    return res;
  }
};

using GraphI = Graph<int>;

int main(int argc, char const* argv[])
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n, m;
  cin >> n >> m;
  GraphI graph(n);
  rep(i, m){
    int a, b, c;
    cin >> a >> b >> c;
    graph.adde(a, b, c);
  }
  cout << graph.prim() << endl;
	return 0;
}

