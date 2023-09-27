#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

const int max_len = 1005;
int dp[max_len][max_len];
char s1[max_len];
char s2[max_len];

void solve() {
  int l1 = strlen(s1);
  int l2 = strlen(s2);
  for (int i = 0; i < max_len; i++) {
    dp[i][0] = dp[0][i] = i;
  }
  for (int i = 0; i < l1; i++) {
    for (int j = 0; j < l2; j++) {
      int d1s = dp[i][j];
      int d1d = dp[i][j] + 1;
      int d2 = dp[i + 1][j] + 1;
      int d3 = dp[i][j + 1] + 1;
      if (s1[i] == s2[j]) {
        dp[i + 1][j + 1] = min(min(d1s, d2), d3);
      } else {
        dp[i + 1][j + 1] = min(min(d1d, d2), d3);
      }
    }
  }
  printf("%d\n", dp[l1][l2]);
}

int main() {
  fgets(s1, max_len, stdin);
  fgets(s2, max_len, stdin);
  for (int i = 0; i < max_len; i++) {
    if (s1[i] == '\n') { s1[i] = '\0'; }
    if (s2[i] == '\n') { s2[i] = '\0'; }
  }
  solve();
  return 0;
}