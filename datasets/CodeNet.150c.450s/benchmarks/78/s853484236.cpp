#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define REP(i, n) for(int (i) = 0; (i) < (n); (i)++)

const int MAX = 1000000;

int dp[MAX + 1];
int dp2[MAX + 1];

void solve()
{
  fill(dp, dp + MAX + 1, MAX);
  fill(dp2, dp2 + MAX + 1, MAX);
  dp[0] = dp2[0] = 0;
  vector<int> v;
  for(int i = 0; ; i++){
    int t = i * (i + 1) * (i + 2) / 6;
    if(t <= MAX)
      v.push_back(t);
    else
      break;
  }
  for(int i = 0; i <= MAX; i++){
    for(int j = 0; j < v.size(); j++){
      if(i + v[j] <= MAX){
        if(v[j] & 1)
          dp2[i + v[j]] = min(dp2[i + v[j]], dp2[i] + 1);
        dp[i + v[j]] = min(dp[i + v[j]], dp[i] + 1);
      }
    }
  }
}
    
int main()
{
  solve();
  while(1){
    int n;
    cin >> n;
    if(n == 0)
      break;
    cout << dp[n] << " " << dp2[n] << endl;
  }
}