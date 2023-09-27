#include <iostream>
#include <algorithm>
#include <vector>
#define N 1000000
#define INFINITY 2000000000
using namespace std;
int DP(int);
int DP2(int);
int m=1,m2=1;
int dp[N],dp2[N],data[N];
vector<int> data2;
int main(){
  int i,out,out2,n,c;
  data2.push_back(0);
  for(i=1;i<N;i++){
    data[i]=i*(i+1)*(i+2)/6;
    if(data[i]>N){
      c=i;
    }
    if(data[i]%2==1){
      data2.push_back(data[i]);
    }
  }
  while(1){
    cin >> n;
    if(n==0) break;
    out=DP(n);
    out2=DP2(n);
    cout << out << ' ' << out2 << endl;
  }
  return 0;
}
int DP(int n){
  int i,j,s;
  for(i=1;i<N;i++){
    if(data[i]>n){
      s=i-1;
      break;
    }
  }
  if(s>=m){
    m=s;
    for(i=0;i<=n;i++) dp[i]=INFINITY;
    dp[0]=0;
    for(i=1;i<=s;i++){
      for(j=data[i];j<=n;j++){
	dp[j]=min(dp[j],dp[j-data[i]]+1);
      }
    }
  }
  return dp[n];
}
int DP2(int n){
  int i,j,s,len;
  len=data2.size();
  for(i=1;i<len;i++){
    if(data2[i]>n){
      s=i-1;
      break;
    }
  }
  if(s>=m2){
    m2=s;
    for(i=0;i<=n;i++) dp2[i]=INFINITY;
    dp2[0]=0;
    for(i=1;i<=s;i++){
      for(j=data2[i];j<=n;j++){
	dp2[j]=min(dp2[j],dp2[j-data2[i]]+1);
      }
    }
  }
  return dp2[n];
}