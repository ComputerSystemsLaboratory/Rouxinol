#include <iostream>
using namespace std;
#define rep(i,n) for(int i = 0 ; i < n ; i++)
#define rep1(i,n) for(int i = 1 ; i < n ; i++)
const int MAX_N = 101;
const int MAX_T = 21;

//total 0 <= x <= 20 テ」ツ?敕」ツつ古、ツサツ・テ・ツ、ツ姪」ツ?ッテ」ツ?ァテ」ツ?催」ツ?ェテ」ツ??」ツ?ョ
//dp[n][total]

int main(){
  int n,a[MAX_N],ans;
  long long dp[MAX_N][MAX_T];
 
  cin >> n;
  rep(i,n-1) cin >> a[i];

  rep(i,MAX_N) rep(j,MAX_T) dp[i][j] = 0;
  dp[0][a[0]] = 1;

  rep1(i,n-1){
    rep(j,MAX_T){
      if(j+a[i] < MAX_T) dp[i][j+a[i]] += dp[i-1][j]; 
      if(j-a[i] >= 0) dp[i][j-a[i]] += dp[i-1][j];
    }
  }

  cin >> ans;
  cout << dp[n-2][ans] << endl;

  return 0;
}