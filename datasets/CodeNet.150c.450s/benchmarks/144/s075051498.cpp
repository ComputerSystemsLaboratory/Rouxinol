#include <bits/stdc++.h>
using namespace std;

# define rep(i, n) for(int(i)=0;(i)<(n);(i)++)
# define reps(i, n) for(int(i)=1;(i)<=(n);(i)++)
# define rrep(i, n) for(int i=((int)(n)); i>0; --i)
# define rreps(i, n) for(int i=((int)(n)); i>=0; --i)
# define ALL(v) v.begin(), v.end()
template<class T>inline bool chmax(T &a, const T &b) { if (a<b) { a=b; return true; } return false; }
template<class T>inline bool chmin(T &a, const T &b) { if (b<a) { a=b; return true; } return false; }
template<typename T> void dump(T e){std::cout << e << std::endl;}
template<typename T> void dump(const std::vector<T>& v){for(const auto& e : v){ std::cout << e << " "; } std::cout << std::endl;}
template<typename T> void dump(const std::vector<std::vector<T> >& vv){ for(const auto& v : vv){ dump(v); } }
typedef long long ll;


int main(){
  int n,m,l; cin >> n >> m >> l;
  vector<vector<int>> a(n, vector<int>(m));
  vector<vector<int>> b(m, vector<int>(l));
  vector<vector<ll>> c(n, vector<ll>(l));
  rep(i, n){
    rep(j, m) {
      cin >> a[i][j];
    }
  }
  rep(i, m) {
    rep(j, l) {
      cin >> b[i][j];
    }
  }
  
  
  rep(i,n) {
    rep(j,l) {
      rep(k,m) {
        c[i][j] += a[i][k] * b[k][j];
      }
    }
  }
  rep(i,c.size()) {
    rep(j,c[i].size()) {
      cout << c[i][j];
      if (j != c[i].size()-1) {
          cout << " ";
      }
    }
    cout << endl;
  }
}

