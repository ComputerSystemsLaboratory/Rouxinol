#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef queue<int> qi;
typedef stack<int> si;
typedef deque<int> dqi;

#define rep(i, n) for (int i = 0; i < n; i++)
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define pf push_front
#define pb push_back
#define FST first
#define SEC second
#define sz(obj) ((int)(obj).size())

const int INF = 999999999;
const int MOD = 1e9 + 7;
const int dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0};

signed main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  
  while (cin >> n, n){
    int dp[35] = {0};
    int cnt = 0, ans;

    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= n; i++){
      dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    }
    ans = dp[n] / 3650;
    if (dp[n] % 3650) ans += 1;
    cout << ans << endl;
  }
}