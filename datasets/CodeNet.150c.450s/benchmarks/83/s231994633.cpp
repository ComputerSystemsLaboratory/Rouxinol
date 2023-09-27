#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;

#define REPS(i, a, n) for (int i = (a); i < (n); ++i)
#define REP(i, n) REPS(i, 0, n)
#define RREP(i, n) REPS(i, 1, n + 1)
#define DEPS(i, a, n) for (int i = (a); i >= n; --i)
#define DEP(i, n) DEPS(i, n, 0)

#define vint(v, n) vector<int> v(n); REP(i,n) cin >> v[i];
#define vvint(v, w, n) vector<int> v(n); vector<int> w(n); REP(i,n) cin >> v[i] >> w[i];
#define vlint(v, n) vector<ll int> v(n); REP(i,n) cin >> v[i];
#define vdouble(v, n) vector<double> v(n); REP(i,n) cin >> v[i];
#define vvdoube(v, n1, n2) vector<vector<double> > v(n1, vector<double>(n2, 0)); REP(i,n1) REP(j,n1) cin >> v[i][j];
#define string(x) string x; cin >> x;
#define vstring(v, n) vector<string> v(n); REP(i,n){string a; std::cin >> a; v.push_back(a); }

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).begin(), (v).end(), std::greater<int>()
#define len(v) (v).length()

static const string abet("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
static const long long int MOD = 1000000007;
static const double PI=3.1415926535897932;
static const int INF = 0x3f3f3f3f;
static const int INFTY = (1 << 29);
static const long long LINFTY = (1LL << 32);

static const int dy4[]={0, 0, 1, -1};
static const int dx4[]={1, -1, 0, 0};
static const int dx8[] = {1, 1, 1, 0, 0, -1, -1, -1};
static const int dy8[] = {-1, 0, 1, -1, 1, -1, 0, 1};

int Knapsack_01(int N,int W,vector<int> v,vector<int> w) {

  int dp[N+1][W+1];
//std::vector<std::vector<int> > dp(N + 1, std::vector<int>(W + 1, 0));
  for (int i = 0; i <= N; i++) dp[i][0] = 0;
  for (int j = 0; j <= W; j++) dp[0][j] = 0;

  REP(i, N) REPS(j, 1, W+1){
      if (j < w[i]) dp[i+1][j] = dp[i][j];
      else dp[i+1][j] = max(dp[i][j], dp[i][j - w[i]] + v[i]);
  }
  return dp[N][W];
}

int main(void) {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N, W;
  cin >> N >> W;
  vvint(v, w, N);

  cout << Knapsack_01(N, W, v, w) << endl;

}