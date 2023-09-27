#include <iostream>
#include <vector>
#define loop(i, a, n) for (int i = (a); i < (n); i++)
#define rep(i, n) loop(i, 0, n)
template<typename A> using V = std::vector<A>;
using vi = V<int>;
using vvi = V<vi>;
template<typename A, typename B> bool cmin(A &a, const B &b) { return a > b ? (a = b, true) : false; }
const int INF = 1000000000;
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vi c(m);
  rep(i, m) cin >> c[i];
  vi dp(n + 1, INF);
  dp[0] = 0;
  loop(i, 1, n + 1) {
    int mini = INF;
    rep(j, m) if (i - c[j] >= 0) cmin(mini, dp[i - c[j]] + 1);
    dp[i] = mini;
  }
  cout << dp[n] << endl;
}