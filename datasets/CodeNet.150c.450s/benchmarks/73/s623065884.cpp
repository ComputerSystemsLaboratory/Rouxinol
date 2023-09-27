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

template<typename T>
struct BIT_{
  int n;
  vector<T> bit;
  BIT_(int n_){
    n = n_;
    bit = vector<T>(n+1, 0);
  }
  void add(int a, T w){
    for(int x = a; x < n; x |= (x + 1)){
      bit[x] += w;
    }
  }
  T sum(int a){
    T res = 0;
    for(int x = a; x >= 0; x = (x & (x + 1)) - 1){
      res += bit[x];
    }
    return res;
  }
};

typedef struct BIT_<int> BITI;
typedef struct BIT_<long long> BITL;

int main(int argc, char const* argv[])
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n, q;
  cin >> n >> q;
  BITL bt(n);
  rep(i, q){
    int c;
    cin >> c;
    int x, y;
    cin >> x >> y, x--, y;
    if(c == 0){
      bt.add(x, y);
    }else{
      cout << bt.sum(y-1) - (x > 0 ? bt.sum(x-1): 0) << endl;
    }
  }
	return 0;
}

