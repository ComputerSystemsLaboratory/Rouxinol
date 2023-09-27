#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  vector<int> smt(1,0);
  vector<int> ksmt(1,0);
  int a;
  for(int i=1;i<10000;i++){
    a=i*(i+1)*(i+2)/6;
    smt.push_back(a);
    if(a%2==1)ksmt.push_back(a);
    if(a>1000000)break;
    //cout << a << endl;
  }
    //cout <<smt.size()<<" "<<ksmt.size()<<endl;
  int dp[2][1000001]={};
  //cout <<"2"<<endl;
  //
  for(int i=1;i<=1000000;i++){
    dp[0][i]=i;
    dp[1][i]=i;
  }
  //all
  for(int i=1;i<smt.size();i++){
    for(int j=1;j<=1000000;j++){
      if(smt[i]>j) dp[0][j]=dp[0][j];
      else{
	dp[0][j]=min(dp[0][j],dp[0][j-smt[i]]+1);
      }
      //cout <<dp[k][j]<<" ";
    }
  }
  //kisuu
  for(int i=1;i<ksmt.size();i++){
    for(int j=1;j<=1000000;j++){
      if(ksmt[i]>j) dp[1][j]=dp[1][j];
      else{
	dp[1][j]=min(dp[1][j],dp[1][j-ksmt[i]]+1);
      }
    }
  }
  while(1){
    int n;
    cin >> n;
    if(n==0)break;
    cout << dp[0][n]<<" "<<dp[1][n]<<endl;
  }
return 0;
}