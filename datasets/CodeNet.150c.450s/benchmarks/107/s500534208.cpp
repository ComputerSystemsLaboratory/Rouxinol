#include<bits/stdc++.h>

using namespace std;

const int MAX = 1005;
int dp[MAX][MAX];

int edit_distance(const string& s1, const string& s2){
  memset(dp, 0, sizeof(dp));
  for(int i = 0; i <= (int)s1.size(); i++) dp[i][0] = i;
  for(int i = 0; i <= (int)s2.size(); i++) dp[0][i] = i;

  for(int i = 1; i <= (int)s1.size(); i++)
    for(int j = 1; j <= (int)s2.size(); j++){
      dp[i][j] = min(dp[i-1][j] + 1,
                     min(dp[i][j-1] + 1,
                         dp[i-1][j-1] + (s1[i-1]==s2[j-1]?0:1)));
    }
  return dp[s1.size()][s2.size()];
}

int main(){
  string s1, s2;
  cin >> s1 >> s2;
  cout << edit_distance(s1, s2) << endl;
  return 0;
}