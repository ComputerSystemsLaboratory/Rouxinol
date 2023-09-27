#include<iostream>
#define INF 1e9
using namespace std;
int main(){
  
  int N;
  cin >>N;
  int A[N];
  int dp[N+1];
  for(int i=0 ; i < N ; i++)cin >>A[i];
  for(int i=0 ; i < N+1 ; i++)dp[i]=INF;

  for(int i=0 ; i < N ; i++){
    *lower_bound(dp,dp+N+1,A[i])=A[i];
  }

  cout <<lower_bound(dp,dp+N+1,INF)-dp<<endl;
  
  return 0;
}