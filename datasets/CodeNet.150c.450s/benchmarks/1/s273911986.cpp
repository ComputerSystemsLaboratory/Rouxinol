#include <algorithm>
#include <array>
#include <cassert>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <utility>
#include <vector>
#define FOR(i,a,b) for (int i=(a);i<=(b);++i)
#define RFOR(i,a,b) for (int i=(a);i>=(b);--i)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;--i)
constexpr int INF = 1100100100;

template<typename T>
class Lis {
  public:
    Lis(std::vector<T> const &s, T infty):
      n(s.size()), inf(infty),seq(s), dp(n, inf) {}
    size_t solve() {
      for (size_t i = 0; i < n; ++i) {
        *std::lower_bound(dp.begin(), dp.end(), seq[i]) = seq[i];
      }
      return std::distance(
          dp.begin(),
          std::lower_bound(dp.begin(), dp.end(), inf));
    }
  private:
    size_t const n;
    T const inf;
    std::vector<T> const seq;
    std::vector<T> dp;
};

using namespace std;

int main() {
  // cout << fixed << setprecision(10);
  int n;
  cin >> n;
  vector<int> a;
  REP(i, n) {
    int x;
    cin >> x;
    a.push_back(x);
  }
  Lis<int> lis(a, INF);
  cout << lis.solve() << endl;
  return 0;
}

