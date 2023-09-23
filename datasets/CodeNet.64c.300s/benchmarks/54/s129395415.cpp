#include<iostream>
using namespace std;
typedef long long ll;
ll dat[100], n,dp[100][100];
ll rec(int now,int sum){
  if(sum > 20 || sum < 0) return 0;
  if(now == n - 1) return sum == dat[n - 1];
  if(dp[now][sum]) return dp[now][sum];
  return dp[now][sum] = rec(now + 1,sum + dat[now]) + rec(now + 1,sum - dat[now]);
}
int main(){
  cin >> n;
  for(int i = 0 ; i < n ; i++ ) cin >> dat[i];
  cout << rec(1,dat[0]) << endl;
}