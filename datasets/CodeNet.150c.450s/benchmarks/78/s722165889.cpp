#include<iostream>
#include<algorithm>
using namespace std;
int dp[1000001];
int odd[1000001];
const int n=1000000;

void update(int* dp,int x){
  for(int i=1;i<=n;i++){
    if(i<x)continue;
    dp[i]=min(dp[i],dp[i-x]+1);
  }
}

int main(){
  dp[0]=odd[0]=0;
  for(int i=1;i<=n;i++){
    dp[i]=99999999;
    odd[i]=99999999;
  }
  for(int i=1;i<=n;i++){
    int x=i*(i+1)*(i+2)/6;
    if(x>n)break;
    update(dp,x);
    if(x&1)update(odd,x);
  }
  int a;
  while(cin>>a,a){
    cout << dp[a] << " " << odd[a] << endl;
  }
  return 0;
}