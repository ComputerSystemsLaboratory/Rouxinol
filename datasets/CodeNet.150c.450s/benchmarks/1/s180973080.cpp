#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef queue<int> qi;
typedef stack<int> si;
typedef deque<int> dqi;

#define REP(i, n) for (int i = 0; i < n; i++)
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define PF push_front
#define PB push_back
#define FST first
#define SEC second
#define sz(obj) ((int)(obj).size())
#define ALL(v) (v).begin(), (v).end()

const int INF = 999999999;
const int MOD = 1e9 + 7;
const int dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0};

inline int in() {int x; std::cin >> x; return x;}
 
template <typename T>
void print(std::vector<T>& v, char c = ' ') {
  REP(i, v.size()) {
    if (i != 0) std::cout << c;
    std::cout << v[i];
  }
  std::cout << endl;
}
template <typename T> void print(T x) { std::cout << x << '\n'; }

int gcd(int a, int b){ int c; while (a != 0){ c = a; a = b % a; b = c; } return b; }

signed main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n = in();
  int dp[100005];
  fill(dp, dp + n, MOD);
  int ans = 0;
  vector<int> a(n);
  REP(i, n) a[i] = in();

  REP(i, n){
    *lower_bound(dp, dp + n, a[i]) = a[i];
  } 

  print(lower_bound(dp, dp + n, MOD) - dp);

/*  REP(i, n){
    dp[i] = 1;
    REP(j, i){
      if (a[i] > a[j]){
        dp[i] = max(dp[i], dp[j] + 1);
      }
    }
    ans = max(ans, dp[i]);
  }
*/

  return (0);
}