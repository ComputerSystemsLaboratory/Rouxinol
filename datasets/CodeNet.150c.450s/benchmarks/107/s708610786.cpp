#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <functional>
#include <queue>
#include <utility>
using namespace std;
typedef long long ll;
const int inf = 3000;
int main(){
  string s;
  string t;
  cin >> s >> t;
  vector<vector<int>> dp(s.size()+1,vector<int>(t.size()+1,inf)); 

  for(int i = 1;i <= s.size();i++)dp[i][0] = i;
  for(int i = 1;i <= t.size();i++)dp[0][i] = i;

  dp[0][0] = 0;
  for(int i = 0;i < s.size();i++){
    for(int j = 0;j < t.size();j++){
      if(s[i] == t[j])dp[i+1][j+1] = dp[i][j];
      else dp[i+1][j+1] = min({dp[i][j+1],dp[i][j],dp[i+1][j]})+1;  
    }
  }

  cout << dp[s.size()][t.size()] << endl; 
}
