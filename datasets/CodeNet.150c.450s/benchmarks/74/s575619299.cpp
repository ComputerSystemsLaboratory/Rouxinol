
#include<cstring>
#include<string>
#include<vector>
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<stack>
#include<queue>
#include<cmath>
#include<algorithm>
#include<list>
#include<set>
#include<map>
#include<sstream>
#include<climits>
#define rep(X,Y) for (int (X) = 0;(X) < (Y);++(X))
#define rrep(X,Y) for (int (X) = (Y)-1;(X) >=0;--(X))
#define all(X) (X).begin(),(X).end()
#define fi first
#define sc second
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
const int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

const int MAX_M = 20, MAX_N = 50000, INF = 1e9;
int n, m;
int c[MAX_M+1], dp[MAX_N+1];

int main() {
  cin >> n >> m;
  for (int i = 1; i <= m; ++i) cin >> c[i];

  for (int i = 0; i <= n; ++i) dp[i] = INF;
  dp[0] = 0;

  for (int i = 1; i <= m; ++i) {
    for (int j = 0; j <= n; ++j) {
      if (j >= c[i]) dp[j] = min(dp[j], dp[j-c[i]]+1);
    }
  }

  cout << dp[n] << endl;

  return 0;
}