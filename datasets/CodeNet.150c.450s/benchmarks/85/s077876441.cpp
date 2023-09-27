#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;

#define PB push_back
#define MP make_pair

void Input();
void Calc();
void Output();

int N=100;
int dp[100][100]; //100...行列の最大個数
vector<int> ivr;
int n,x;

int main(int argc,char* argv[]){

  memset(dp,15,sizeof(dp));
  for(int i=0;i<=100;i++) dp[1][i]=0;
  ivr.clear();
  
  Input();
  Calc();
  Output();
  return 0;
}

void Input(){
  ivr.PB(0);
  cin>>n;
  for(int i=0;i<2;i++){
    cin>>x;
    ivr.PB(x);
  }
  for(int i=1;i<n;i++){
    cin>>x;
    cin>>x;
    ivr.PB(x);
  }
}

void Calc(){

  for(int i=2;i<=n;i++){
    for(int j=1;j<=n-i+1;j++){
      for(int k=1;k<i;k++){
	dp[i][j]=min(dp[k][j]+dp[i-k][j+k]+ivr[j]*ivr[j+k]*ivr[i+j],dp[i][j]);
      }
    }
  }
}

void Output(){
  cout<<dp[n][1]<<endl;
}