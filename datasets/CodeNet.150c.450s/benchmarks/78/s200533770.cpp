#include<iostream>
#include<algorithm>
using namespace std;
int dp[2][1000001];
int odd[2][1000001];
int Odd(int n,int w){
  for(int i=0;i<2;i++)
    for(int j=0;j<=n;j++){
      odd[i][j]=99999999;
      if(i==0)odd[i][j]=j;
      if(j==0)odd[i][j]=0;
    }

    for(int i=1;i<=w;i++){
      for(int j=1;j<=n;j++){
	if((i*(i+1)*(i+2)/6)%2==0){
	  odd[i&1][j]=odd[i&1^1][j];
	}else if(j<i*(i+1)*(i+2)/6){
	  odd[i&1][j]=odd[i&1^1][j];
	}else{
	  odd[i&1][j]=min(odd[i&1^1][j],odd[i&1][j-i*(i+1)*(i+2)/6]+1);
	}
      }
    }
    return 1;
}

int main(){
  int n=1000000;
  int w=300;
    for(int i=0;i<2;i++)
      for(int j=0;j<=n;j++){
	dp[i][j]=99999999;
	if(i==0)dp[i][j]=j;
	if(j==0)dp[i][j]=0;
      }
    for(int i=1;i<=w;i++){
      for(int j=1;j<=n;j++){
	if(j<i*(i+1)*(i+2)/6){
	  dp[i&1][j]=dp[i&1^1][j];
	}else{
	  dp[i&1][j]=min(dp[i&1^1][j],dp[i&1][j-i*(i+1)*(i+2)/6]+1);
	}
	//cout << "dp[" << i << "][" << j <<"]:"<< dp[i][j] << endl;
      }
    }
    int a;
    Odd(n,w);
    while(cin>>a,a){
      int b=0;
      while(b*(b+1)*(b+2)/6<a)b++;
      cout << dp[b%2][a] << " " << odd[b%2][a] << endl;
    }
  return 0;
}