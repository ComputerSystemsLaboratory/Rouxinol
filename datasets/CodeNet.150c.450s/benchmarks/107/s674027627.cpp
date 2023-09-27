
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
  
using namespace std;
  
int LevenshteinDistance(string s, string t) {
    
  int len_s = s.size();
  int len_t = t.size();
    
  vector<vector<int> > dp(len_s+1, vector<int>(len_t+1, 0));
  
  for(int i=0; i<=len_s; i++)
    dp[i][0] = i;
    
  for(int i=0; i<=len_t; i++)
    dp[0][i] = i;
    
  int cost;
  for(int i=1; i<=len_s; i++) {
    for(int j=1; j<=len_t; j++) {
      if(s[i-1] == t[j-1]) cost = 0;
      else cost = 1;
        
      dp[i][j] = min(dp[i-1][j] + 1, min(dp[i][j-1] + 1, dp[i-1][j-1] + cost));
    }
  }
    
  return dp[len_s][len_t];
}
  
int main() {
    
  string s, t;
    
  std::cin >> s >> t;
    
  std::cout << LevenshteinDistance(s, t) << endl;
    
  return 0;
}
