#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;
typedef long long ll;
ll dp[101][22][2];
int N;
int A[111];
ll solve(int no,int sum,int k){
  if(sum>20) return 0;
  if(sum<0) return 0;
  if(dp[no][sum][k]!=-1) return dp[no][sum][k];
  if(no==N-2){
    if(sum+(k?-A[no]:A[no])==A[N-1]) return 1;
    return 0;
  }
  return dp[no][sum][k]=solve(no+1,sum+(k?-A[no]:A[no]),0)
    +solve(no+1,sum+(k?-A[no]:A[no]),1);
}
int main(){
  memset(dp,-1,sizeof(dp));
  scanf("%d",&N);
  for(int i=0;i<N;i++) scanf("%d",&A[i]);
  printf("%lld\n",solve(1,A[0],0)+solve(1,A[0],1));
}