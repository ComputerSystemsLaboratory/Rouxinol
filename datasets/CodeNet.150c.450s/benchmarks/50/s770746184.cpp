#include<iostream>
using namespace std;

int memo[1111];

int solve(int n){
  
  if(!n) return 0;
  if(n<0) return 1<<28;
  if(memo[n]) return memo[n];
  
  int ans = 1<<28;
  ans = min(solve(n-500)+1, min(solve(n-100)+1, min(solve(n-50)+1, min(solve(n-10)+1, min(solve(n-5)+1, solve(n-1)+1)))));
  
  return memo[n] = ans;
}

int main(){
  
  for(int i=0;i<1111;i++) solve(i);

  int n;
  while(cin >> n, n) cout << solve(1000-n) << endl;
  
}