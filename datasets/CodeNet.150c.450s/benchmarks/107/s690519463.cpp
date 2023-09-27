#include <iostream>
#include <string.h>


using namespace std;

const int SMAX = 1001;
int dp[SMAX][SMAX];

int main() {
  char s1[SMAX], s2[SMAX];
  int s1len, s2len;
  cin >> s1;
  cin >> s2;

  s1len = strlen(s1);
  s2len = strlen(s2);

  for (int dpi=1; dpi<=s1len; ++dpi) {
    dp[dpi][0] = dp[dpi-1][0] + 1;
  }
  for (int dpj=1; dpj<=s2len; ++dpj) {
    dp[0][dpj] = dp[0][dpj-1] + 1;
  }
  for (int i=0; i<s1len; ++i) {
    for (int j=0; j<s2len; ++j) {
      int dpi = i+1;
      int dpj = j+1;
      int r = dp[dpi-1][dpj-1] + (s1[i]==s2[j] ? 0 : 1) ;    // replace cost
      int a = dp[dpi][dpj-1] + 1;   // add cost
      int d = dp[dpi-1][dpj] + 1;   // del cost
      int min = r;
      if (min>a)min = a;
      if (min>d)min = d;
      dp[dpi][dpj] = min;
    }
  }
  cout << dp[s1len][s2len] << endl;
/*
  for (int i=0; i<=s1len; ++i) {
    for (int j=0; j<=s2len; ++j) {
      cerr << dp[i][j] << " ";
    }
    cerr << endl;
  }
  */
  return 0;
}