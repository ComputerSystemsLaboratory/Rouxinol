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
  vector<vector<pair<int, T> > > edge;
  vector<T> dis;
  Graph_(int ns) {
    n = ns;
    edge.resize(n);
    dis.resize(n);
  }
  void dijkstra(int s){
    dijkstra(s, 0);
  }
  T dijkstra(int s, int t){
    // initialize
    fill(dis.begin(), dis.end(), -1);
    vector<bool> used;
    used.resize(n);
    fill(used.begin(), used.end(), false);
    dis[s] = 0;
    // dijkstra
    priority_queue<pair<T, int>, vector<pair<T, int> >, greater<pair<T, int> > > q;
    q.push(make_pair(0, s));
    while(!q.empty()){
      pair<T, int> p = q.top(); q.pop();
      int at = p.second;
      T distance = p.first;
      if(used[at])continue;
      used[at] = true;
      for(auto itr = edge[at].begin(); itr != edge[at].end(); ++itr){
        int to = (*itr).first;
        T cost = (*itr).second;
        if(used[to])continue;
        if(dis[to] == -1 || dis[to] > distance + cost){
          q.push(make_pair(distance + cost, to));
          dis[to] = distance + cost;
        }
      }
    }
    return dis[t];
  }
  void adde(int at, int to, T cost){
    edge[at].push_back(make_pair(to, cost));
  }
  [[deprecated("This function takes O(edge[at].size()).")]]
    void remove(int at, int to){
      int index = -1;
      for(int i = 0; i < edge[at].size(); i++){
        if(edge[at][i].first == to){
          index = i;
          break;
        }
      }
      edge[at].erase(edge[at].begin() + index);
    }
};

typedef struct Graph_<int> GraphI;
typedef struct Graph_<ll> GraphL;
typedef struct Graph_<double> GraphD;

int main(int argc, char const* argv[])
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n, m, r;
  cin >> n >> m >> r;
  GraphL graph(n);
  rep(i, m){
    int a, b, d;
    cin >> a >> b >> d;
    graph.adde(a, b, d);
  }
  graph.dijkstra(r);
  rep(i, n){
    if(graph.dis[i] >= 0)cout << graph.dis[i] << endl;
    else cout << "INF" << endl;
  }
	return 0;
}

