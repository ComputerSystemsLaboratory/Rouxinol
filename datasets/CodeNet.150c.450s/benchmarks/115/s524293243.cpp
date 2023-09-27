#include <iostream>
#include <cstring>
using namespace std;

int dp[1001][1001];

int main(){
  int q,xl,yl;
  char X[1001],Y[1001];

  cin >> q;

  for (int i=0;i<q;i++){
    cin >> X >> Y;

    xl=strlen(X);
    yl=strlen(Y);
  
    for (int i=1;i<=xl;i++)dp[0][i]=0;
    for (int i=1;i<=yl;i++)dp[i][0]=0;
    for (int i=0;i<yl;i++)
      for (int j=0;j<xl;j++){
	if (X[j]==Y[i]){
	  dp[i+1][j+1]=dp[i][j]+1;
	}else{
	  if (dp[i+1][j]>dp[i][j+1])
	    dp[i+1][j+1]=dp[i+1][j];
	  else
	    dp[i+1][j+1]=dp[i][j+1];	    
	}
      }
    cout << dp[yl][xl]<<endl;
    
  }
  
  return 0;
}