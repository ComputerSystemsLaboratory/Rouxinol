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

#define vint(v,n) vector<int> v(n); REP(i,n) cin >> v[i];
#define vlint(v,n) vector<ll int> v(n); REP(i,n) cin >> v[i];
#define vdouble(v,n) vector<double> v(n); REP(i,n) cin >> v[i];
#define vvdoube(v,n1,n2) vector<vector<double> > v(n1, vector<double>(n2, 0)); REP(i,n1) REP(j,n1) cin >> v[i][j];
#define string(x) string x; cin >> x;
#define vstring(v,n) vector<string> v(n); REP(i,n){string a; std::cin >> a; v.push_back(a); }

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


int main(void) {
  cin.tie(0);
  ios::sync_with_stdio(false);

  
      int n, W;
   
      cin >> n >> W;
   
      int v[n], w[n];
      int dp[W + 1];
   
      for(int i = 0; i < n; ++i) {
          cin >> v[i] >> w[i];
      }
   
      fill(dp, dp + W + 1, 0);
   
      for(int i = 0; i < n; ++i) {
          for(int j = W; j >= w[i]; --j) {
              dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
          }
      }
   
      cout << dp[W] << endl;
   
  }