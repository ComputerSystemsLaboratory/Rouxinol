#include <iostream>

using namespace std;


long long dp[100][21];

int main(){
  int N, c;
  
  cin >> N;
  cin >> c;
  dp[0][c] = 1;
  
  for(int i = 1; i < N-1; i++){
    cin >> c;
    for(int j = 0; j < 21; j++){
      if(dp[i-1][j]){
	int plus  = j + c;
	int minus = j - c;
	if(0 <= plus && plus <= 20){
	  //cout << "plus" << endl;
	  dp[i][plus] += dp[i-1][j];
	}
	if(0 <= minus && minus <= 20){
	  //cout << "minus" << endl;
	  dp[i][minus] += dp[i-1][j];
	}
      }
    }
  }

  /*for(int j = 0; j < N; j++){
  for(int i = 0; i < 21; i++){
    cout << dp[j][i] << " ";
  }
  cout << endl;
  }*/
  cin >> c;
  cout << dp[N-2][c] << endl;
}