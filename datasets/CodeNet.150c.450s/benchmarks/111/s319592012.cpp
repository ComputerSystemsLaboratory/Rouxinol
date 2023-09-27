#include<iostream>
#include<algorithm>

using namespace std;

int main(void){
  int n,a[101];
  long long dp[101][21];

  while(cin >> n){
    for(int i=0;i<n;i++)
      cin >> a[i];
    
    for(int i=0;i<101;i++)
      for(int j=0;j<21;j++)
	dp[i][j]=0;

    dp[0][a[0]]=1;

    for(int i=0;i<n-1;i++){
      for(int j=0;j<21;j++){
	if(j+a[i+1]<21)dp[i+1][j+a[i+1]]+=dp[i][j];
	if(j-a[i+1]>=0)dp[i+1][j-a[i+1]]+=dp[i][j];
      }
    }

    cout << dp[n-2][a[n-1]] << endl;
  }

  return 0;
}