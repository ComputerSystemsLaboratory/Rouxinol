
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
#define down_queue(x) priority_queue<x>
#define up_queue(x) priority_queue<x, vector<x>, greater<x>>
#define vec(x) vector<x>
ll gcd(ll a,ll b){while(b){ll tmp = a % b;a = b;b = tmp;}return a;}
ll lcm(ll a,ll b){return a / gcd(a,b) * b;}
#define rep(x, y) for(int x = 0; x < (y); x++)
#define REP(x, z, y) for(int x = (z); x < (y); x++)
#define all(x) x.begin(), x.end()
#define split_str(str, sp_word) istringstream stream(str); string res; for(int cnt = 0; getline(stream,res,sp_word); cnt++)
#define digit(x) ((int)log10((double)(x)) + 1)
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pf(x) push_front(x)
#define out(x) for(auto i : x) cout << i << " "; cout << endl;
#define outln(x) for(auto i : x) cout << i << " " << endl;
#define vec_cpy(to,from) copy(all(to),back_inserter(from))
#define ary_cpy(to,from) memcpy(to, from, sizeof from)
#define MOD = 1000000007; 
#ifdef DEBUG
#define debug_echo(e) cout << "L" << __LINE__ << ": " << e << endl
#define debug_var(e) cout << "L" << __LINE__ << ": " << #e << " = " << e << endl
#else
#define debug_echo(e)
#define debug_var(e)
#endif
#ifdef DEBUG
#define debug_echo_dp1(dp, N) { cout << "[ "; rep(i, N) cout << dp[i] << " ";  cout << "]" << endl; }
#else
#define debug_echo_dp1(dp, N)
#endif

#define MAX_N 100000

int N;
int a[MAX_N];
int dp[MAX_N];

int solve() {
  rep(i, N) {
    dp[i] = INT_MAX;
  }
  rep(i, N) {
    *lower_bound(dp, dp+N, a[i]) = a[i];
  }
  return lower_bound(dp, dp+N, INT_MAX) - dp;
}

int main() {
  cin >> N;
  rep(i, N) {
    cin >> a[i];
  }
  cout << solve() << endl;
}