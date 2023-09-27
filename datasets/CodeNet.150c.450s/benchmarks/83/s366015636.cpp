#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int> > dp(100, vector<int>(10001, -1));
int N;
vector<int> v(100, 0), w(100, 0);

int solve(int i, int W){
  if(i == N)return 0;
  if(dp[i][W] != -1)return dp[i][W];
  if(w[i] <= W){
    return dp[i][W] = max(solve(i + 1, W - w[i]) + v[i], solve(i + 1, W));
  }else return dp[i][W] = solve(i + 1, W);
}

int main(){
  int W;
  cin >> N >> W;
  for(int i = 0; i < N; i++){
    cin >> v[i] >> w[i];
  }
  cout << solve(0, W) << endl;
}