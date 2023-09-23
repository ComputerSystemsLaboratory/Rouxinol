#include <iostream>
using namespace std;

long long int dp[102][22];

int main()
{
  int n,sum=0,number[102]={};
  cin>>n;
  for(int i=1;i<n;i++){
    cin>>number[i];
  }
  int last;
  cin >> last;
  dp[1][number[1]]=1;
  for(int i=2;i<=n-1;i++){
    for(int j=0;j<=20;j++){
      if(dp[i-1][j]!=0){
        if((j-number[i])>=0){
          dp[i][j-number[i]]+=dp[i-1][j];
        }
        if((j+number[i])<=20){
          dp[i][j+number[i]]+=dp[i-1][j];
        }
      }
    }
  }
  cout<<dp[n-1][last]<<endl;
  return 0;
}