#include <iostream>
#include <vector>
using namespace std;
const long long INF = (1e9);
int main(){
  int N, W;
  cin >> N >> W;
  vector<long long> DP(W+1,-INF);
  DP[0] = 0;
  for(int i = 0; i < N; ++i){
    vector<long long> DP_ = DP;
    int v, w;
    cin >> v >> w;
    for(int j = 0; j <= W-w; ++j){
      DP_[j+w] = max(DP_[j+w], DP[j] + v);
    }
    DP = DP_;
  }
  long long ans = 0;
  for(int i = 0; i <= W; ++i) ans = max(ans, DP[i]);
  cout << ans << endl;
  return 0;
}

