#include <iostream>
#define REP(i, a, n) for(int i = a; i < n; i++)
using namespace std;


int a, b, n;
int dp[17][17];
int mp[17][17];

int main(void) {
  while(cin >> a >> b, !(a == 0 && b == 0)) {
    cin >> n;

    REP(i, 1, a + 1) REP(j, 1, b + 1) mp[i][j] = 0;
    REP(i, 0, n) {
      int j, k;
      cin >> j >> k;
      mp[j][k] = 1;
    }

    REP(i, 1, a + 1) {
      REP(j, 1, b + 1) {
        if(mp[i][j] == 1) dp[i][j] = 0;
        else {
          if(i == 1 && j == 1) {
            dp[i][j] = 1;
          } else if(i == 1) {
            dp[i][j] = dp[i][j - 1];
          } else if(j == 1) {
            dp[i][j] = dp[i - 1][j];
          } else {
            dp[i][j] = dp[i][j - 1] + dp[i - 1][j];
          }
        }
      }
    }

    cout << dp[a][b] << endl;
  }

  return 0;
}