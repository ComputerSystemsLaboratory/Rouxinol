#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
  int N, W;
  cin >> N >> W;
  vector<int> v(N + 1);
  vector<int> w(N + 1);
  v[0] = w[0] = 0;
  for(int i = 1; i <= N; i++){ cin >> v[i] >> w[i]; }

  vector<int> dp(W + 1, 0);
  for(int i = 1; i <= N; i++)
    for(int j = W; j >= w[i]; j--)
        dp[j] = max(dp[j], dp[j - w[i]] + v[i]);

  cout << dp[W] << endl;
  return 0;
}