#include<iostream>
#include<cstring>
using namespace std;

int num[110];
int n;
unsigned long long int dp[110][110];
unsigned long long int solve(int i, int tar, unsigned long long int sum);
int main(){
  memset(dp, 0, sizeof(dp));
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> num[i];
  }
  cout << solve(1, num[n - 1], num[0]) << endl;
  
}

unsigned long long int solve(int i, int tar, unsigned long long int sum){
  if(i >= n) return 0;
  if(sum < 0 || sum > 20) return 0;
  if(dp[i][sum] > 0) return dp[i][sum];
  if(sum == tar && i == n - 1) return 1;
  else if(sum != tar && i == n - 1) return 0;
  return dp[i][sum] = solve(i + 1, tar, sum + num[i]) + solve(i + 1, tar, sum - num[i]);
}