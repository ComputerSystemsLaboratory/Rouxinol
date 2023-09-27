#include <bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
#define ALL(a) (a).begin(),(a).end()
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
#define ll long long
#define ull unsigned long long
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

using namespace std;

int main(){
  string s1,s2;
  cin >> s1 >> s2;
  vector<vector<int>> dp(s1.size()+1,vector<int>(s2.size()+1,0));
  REP(i,s1.size()+1)dp[i][0] = i;
  REP(i,s2.size()+1)dp[0][i] = i;

  REP(i,s1.size()){
    REP(j,s2.size()){
      int tmp = 1;
      if(s1[i] == s2[j])tmp = 0;
      dp[i+1][j+1] = min(dp[i][j] + tmp, min(dp[i][j+1],dp[i+1][j])+1);
    }
  }

  cout << dp[s1.size()][s2.size()] << endl;
  return 0;
}