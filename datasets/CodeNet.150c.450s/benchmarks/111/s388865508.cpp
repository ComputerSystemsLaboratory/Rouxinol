#include<iostream>

using namespace std;

typedef long long ll;

ll dp[101][21];
int a[101],n;

ll func(int i, int res){

  if(res<0 || 20<res)return 0;
  if(dp[i][res]>0)return dp[i][res];
  if(i>n-2 && res==a[n-1])return 1;
  else if(i>n-2 && res!=a[n-1])return 0;

  ll ans=0;
  ans+=func(i+1,res+a[i]);
  if(i)ans+=func(i+1,res-a[i]);
  
  return dp[i][res]=ans;
}


int main(void){

  while(cin >> n){
    for(int i=0;i<n;i++)
      cin >> a[i];

    for(int i=0;i<=n;i++)
      for(int j=0;j<21;j++)
	dp[i][j]=0;
    
    cout << func(0,0) << endl;
  }
  return 0;
}