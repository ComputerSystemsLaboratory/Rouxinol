#include <bits/stdc++.h>

using namespace std;

/// {{{
/*-------------------------------*/
#define FOR(i, a, b) for(int i = (a); i < (b); i++)
#define RFOR(i, a, b) for(int i = (b) - 1; i >= (a); i--)
#define REP(i, n) for(int i = 0; i < (n); i++)
#define RREP(i, n) for(int i = (n) - 1; i >= 0; i--)
#define all(i) (i).begin(),(i).end()
#define pb push_back
#define mp make_pair

typedef long long ll;
typedef pair<int, int> pint;
typedef vector<int> vi;
typedef vector<vector<int> > vii;
typedef vector<long long> llv;
typedef vector<pint> vpint;

int gcd(int a, int b){return b?gcd(b, a % b):a;}
/*-------------------------------*/
/// }}}

int main(void){
  while (true){
    int x, y;
    cin >> x >> y;

    if (x == 0 && y == 0) break;

    int cnt = 0;
    int a;
    cin >> a;
    int dp[20][20] = {0};

    REP(i, a){
      int b, c;
      cin >> b >> c;
      dp[c][b] = -1;
    }

    dp[1][1] = 1;
    FOR(i, 1, y + 1){
      FOR(j, 1, x + 1){
        if (dp[i][j] != -1){
          if (i != 1 && dp[i - 1][j] != -1) dp[i][j] += dp[i - 1][j];
          if (j != 1 && dp[i][j - 1] != -1) dp[i][j] += dp[i][j - 1];
        }
      }
    }
    cout << dp[y][x] << endl;
  }
  return (0);
}