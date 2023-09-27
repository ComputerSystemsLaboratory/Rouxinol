#include<iostream>
#include<algorithm>

using namespace std;

int main(){
  
  int i,j,n,m,dp[50001];

  cin >> n >> m;
  int coin[25];

  for(i = 1; i <= m; i++){
    cin >> coin[i];
  }

  for(i = 1; i<= n; i++)dp[i]=i;

  for(i = 1; i <= m; i++){
    for(j = 1; j <= n; j++){
      if(j-coin[i]>=0){

	//if(i==3&&j==n){
	//dp[j]=min(dp[j],dp[j-coin[i]]);
	//}else{
	  dp[j]=min(dp[j],dp[j-coin[i]]+1);
	}
      }
    //}


    /*  for(j=0;j<=n;j++)cout<<dp[j]<<' ';
	cout<<endl; */
    } 

  cout << dp[n] << endl;
  return 0;
}