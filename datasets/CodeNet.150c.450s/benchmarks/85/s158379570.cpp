#include <iostream>
#include <utility>
using namespace std;

#define REP(i, n) for(int i = 0; i < (n); i++)

typedef pair<int, int> pii;

const int N_SIZE = 100;

int dp[N_SIZE + 1][N_SIZE + 1];

void solve(int n, pii rc[])
{
  REP(i, n)
    dp[i][i] = rc[i].first * rc[i].second;
  REP(i, n - 1)
    dp[i][i + 1] = dp[i][i] * rc[i + 1].second;
  for(int i = 2; i < n; i++){
    for(int j = 0, k = i + j, m = 100000000; k < n; j++, k++){
      for(int l = j, x; l < k; l++){
	x = ((j == l) ? dp[j][l] * rc[k].second : dp[j][l]) + ((l + 1 == k) ? dp[l + 1][k] * rc[j].first : dp[l + 1][k]);
	if(j != l && l + 1 != k)
	  x += rc[j].first * rc[l].second * rc[k].second;
	m = min(m, x);
      }
      dp[j][k] = m;
      m = 100000000;
    }
  }
}
 
int main()
{
  int n;
  cin >> n;
  pii rc[n];
  REP(i, n)
    cin >> rc[i].first >> rc[i].second;
  if(n == 1){
    cout << "0" << endl;
  }else{
    solve(n, rc);
    cout << dp[0][n - 1] << endl;
  } 
}