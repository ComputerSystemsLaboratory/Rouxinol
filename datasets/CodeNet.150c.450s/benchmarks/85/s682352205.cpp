#include <iostream>
#include <vector>

using namespace std;

int main(){
  int N; cin >> N;
  int dp[101][101];
  fill((int*)dp, (int*)dp+101*101, 1234567890);

  vector<int> r(N), c(N);
  for(int i=0;i<N;++i){
	cin >> r[i] >> c[i];
	dp[i][i+1] = 0;
  }
  
  for(int l=2;l<=N;++l){
	for(int i=0;i+l<=N;++i){
	  for(int j=i+1;j<i+l;++j){
		dp[i][i+l] = min(dp[i][j] + dp[j][i+l] + r[i]*c[i+l-1]*r[j], dp[i][i+l]);
	  }
	}
  }
  cout << dp[0][N] << endl;
  
  return 0;
}