#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int levenshtein(string a, string b) {
  int alen = a.length(), blen = b.length();
  int dp[alen+1][blen+1];
  
  for (int i = 0; i <= alen; i++) dp[i][0] = i;
  for (int j = 0; j <= blen; j++) dp[0][j] = j;
  
  int l, m, r;
  for (int i = 1; i <= alen; i++) {
    for (int j = 1; j <= blen; j++) {
      l = dp[i-1][j] + 1;
      r = dp[i][j-1] + 1;
      if (a[i-1] == b[j-1]) {
        m = dp[i-1][j-1];
      } else {
        m = dp[i-1][j-1] + 1;
      }
      dp[i][j] = min(l, min(m, r));
    }
  }
  
  return dp[alen][blen];
}

int main(void){
  string s1, s2;
  cin >> s1;
  cin >> s2;
  
  cout << levenshtein(s1, s2) << endl;
  
  return 0;  
}