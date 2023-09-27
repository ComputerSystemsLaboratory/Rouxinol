//Longest Increasing Subsequence
#include<bits/stdc++.h>
using namespace std;


#define INF 1234567890
int a[100000];
int dp[100000];

int main(){
  int n;
  cin>>n;
  for(int i=0; i<n; i++)dp[i]=INF;
  for(int i=0; i<n; i++)cin>>a[i];

  for(int i=0; i<n; i++)
    *lower_bound(dp, dp+n, a[i])=a[i];

  cout<<lower_bound(dp, dp+n, INF)-dp<<endl;
  return 0;
}