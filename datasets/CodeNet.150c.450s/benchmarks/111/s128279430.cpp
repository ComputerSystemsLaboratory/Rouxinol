#include <iostream>
#include <vector>
using namespace std;
void fun(vector<vector<long long> > &dp){
  cout << "---------------------------" << endl;
  for(int j = 0;j < dp[0].size();j++){
    for(int i = 0;i < dp.size();i++){
      cout << dp[i][j] << " " ;
    }
    cout << endl;
  }
}
int main(){
  int n;
  cin >> n;
  vector<int> retu(n,0);
  for(int i = 0;i < n;i++){
    cin >> retu[i];
  }
  vector<vector<long long> > dp(n,vector<long long>(21,0));
  dp[0][retu[0]] = 1;
  for(int i = 0;i < n-2;i++){
    for(int j = 0;j < 21;j++){
      if(dp[i][j] != 0){
	if(j+retu[i+1] < 21){
	  dp[i+1][j+retu[i+1]] += dp[i][j];  
	}
	if(j-retu[i+1] >= 0){
	  dp[i+1][j-retu[i+1]] += dp[i][j];  
	}
      }
    }
    //    fun(dp);
  }
  cout << dp[n-2][retu[n-1]] << endl;
  return 0;
}