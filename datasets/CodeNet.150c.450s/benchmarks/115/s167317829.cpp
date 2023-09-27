#include<iostream>
#include<string.h>
using namespace std;

int dp[1001][1001];
string str1, str2;
int n;

int solve(string str1, string str2) {
  memset(dp, 0, sizeof(dp));
  for(int r = 0; r < str2.size(); r++) {
    for(int c = 0; c < str1.size(); c++) {
      if(str2[r] == str1[c]) {
        dp[r + 1][c + 1] = dp[r][c] + 1;
      }
      else {
        dp[r + 1][c + 1] = max(dp[r + 1][c], dp[r][c + 1]);
      }
    }
  }
  return dp[str2.size()][str1.size()];
}

int main() {
  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> str1 >> str2;
    cout << solve(str1, str2) << endl;
  }
}

