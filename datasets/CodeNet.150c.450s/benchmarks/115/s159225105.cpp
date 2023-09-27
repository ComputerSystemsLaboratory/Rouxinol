#include <iostream>
#include <algorithm>
using namespace std;

#define REP(i, n) for(int (i) = 0; (i) < (n); (i)++)

string str1, str2;
int dp[1001][1001];

void solve()
{
  REP(i, str1.size())
    if(str1[i] == str2[str2.size() - 1])
      dp[i][str2.size() - 1] = 1;
    else
      dp[i][str2.size() - 1] = 0;
  for(int i = str2.size() - 2; i >= 0; i--)
    if(str1[str1.size() - 1] == str2[i])
      dp[str1.size() - 1][i] = 1;
    else
      dp[str1.size() - 1][i] = dp[str1.size() - 1][i + 1];
  for(int i = str1.size() - 2; i >= 0; i--){
    for(int j = str2.size() - 2; j >= 0; j--){
      if(str1[i] == str2[j])
	dp[i][j] = dp[i + 1][j + 1] + 1;
      else
	dp[i][j] = max(dp[i + 1][j], dp[i][j + 1]);
    }
  }
}
  
int main()
{
  int q, m;
  cin >> q;
  cin.ignore();
  REP(i, q){
    getline(cin, str1);
    getline(cin, str2);
    fill(&dp[0][0], &dp[1001][0], -1);
    solve();
    m = dp[0][0];
    swap(str1, str2);
    fill(&dp[0][0], &dp[1001][0], -1);
    solve();
    cout << ((m > dp[0][0]) ? m : dp[0][0]) << endl;
  }
}