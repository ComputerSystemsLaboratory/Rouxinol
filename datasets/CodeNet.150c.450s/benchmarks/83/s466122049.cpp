#include<iostream>
#include<algorithm>
using namespace std;

int n, w;
int a[111], b[111];
int memo[111][11111];

int solve(int i, int p){

  if(p < 0) return -(1<<28);
  if(i == n) return 0;
  if(memo[i][p]) return memo[i][p];
  
  int ans = 0;
  return memo[i][p] = ans += max(solve(i+1, p), solve(i+1, p-b[i])+a[i]);

}

int main(){

  cin >> n >> w;
  for(int i=0;i<n;i++) cin >> a[i] >> b[i];

  cout << solve(0, w) << endl;

}