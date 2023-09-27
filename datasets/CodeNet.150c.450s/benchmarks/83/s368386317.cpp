#include <bits/stdc++.h>
using namespace std;

#define rep(i, j, n) for(int i=j;i<n;++i)
#define all(i) i.begin(),i.end()
#define rall(i) i.rbegin(),i.rend()
#define INF 1e9
#define Puts(x) puts(x? "Yes":"No")
const int mod = 1e9 + 7;

typedef long long i64;
typedef pair<int, int> pi;

template <class T> using vt = vector<T>;
template <class T> using vvt = vector<vector<T>>;

i64 gcd(int n, int m) {return (m == 0? n : gcd(m, n % m));}
i64 lcm(int n, int m) {return (n / gcd(n, m) * m);}
int dx[] = {0, 1, 0, -1, 1, 1, -1, -1};
int dy[] = {1, 0, -1, 0, 1, -1, 1, -1};

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, w;
  cin >> n >> w;
  vt<int> value(n), weight(n);
  rep(i, 0, n) cin >> value[i] >> weight[i];

  vvt<int> dp(n + 1, vt<int>(w + 1, 0));
  rep(i, 0, n) {
    rep(j, 0, w + 1) {
      if(j >= weight[i]) dp[i + 1][j] = max(dp[i][j], dp[i][j - weight[i]] + value[i]);
      else dp[i + 1][j] = dp[i][j];
    }
  }
  cout << dp[n][w] << endl;
}

