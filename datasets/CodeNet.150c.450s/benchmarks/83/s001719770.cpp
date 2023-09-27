#include <iostream>
#include <algorithm>
using namespace std;

int N, C;
int V[101], W[101];
int dp[101][10001];
    
int maxValue(int i, int j) {
  if (i == 0) return 0;
  if (dp[i][j]) return dp[i][j];
  if (j < W[i]) return dp[i][j] = maxValue(i - 1, j);
  return dp[i][j] = max(maxValue(i - 1, j), maxValue(i - 1, j - W[i]) + V[i]);
}

int main(void){
  cin >> N >> C;
  for (int i = 1; i <= N; i++) cin >> V[i] >> W[i];
  V[0] = W[0] = 0;
  
  cout << maxValue(N, C) << endl;
  
  return 0;
}