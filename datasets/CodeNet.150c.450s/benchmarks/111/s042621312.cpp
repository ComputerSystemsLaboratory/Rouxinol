#include<iostream>
using namespace std;
int n,data[101];
long long dp[101][21];
long long rec(int,int);
int main(){
  cin >> n;
  for(int i=0;i<n;i++) cin >> data[i];
  cout << rec(1,data[0]) << endl;
}
long long rec(int x,int s){
  if(s < 0 || s > 20) return 0;
  if(dp[x][s] != 0) return dp[x][s];
  if(x == n - 1) return (s == data[n - 1] ? 1 : 0);

  return (dp[x][s] = rec(x+1,s+data[x])+rec(x+1,s-data[x]));
}