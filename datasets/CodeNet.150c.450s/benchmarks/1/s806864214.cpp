/*
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_1_D&lang=jp
*/
//最長増加部分列
#include<iostream>
#include<climits>
using namespace std;

int n;
int L[100000];
int dp[100000];

//O(n^2)アルゴリズム
/*
int LIS(){
  int length=0;
  for(int i=0;i<n;i++){
    dp[i]=1;
    for(int j=0;j<i;j++){
      if(L[i]>L[j]) dp[i]=max(dp[i],dp[j]+1);
    }
    length=max(length,dp[i]);
  }
  return length;
}
*/
int LIS(){
  fill(dp,dp+n,INT_MAX);
  for(int i=0;i<n;i++){
    *lower_bound(dp,dp+n,L[i])=L[i];
  }
  return lower_bound(dp,dp+n,INT_MAX)-dp;
}

int main(){
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>L[i];
  }
  cout<<LIS()<<"\n";
}

