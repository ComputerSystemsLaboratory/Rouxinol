#include<iostream>
using namespace std;

int memo[1111];
int p[] = {500, 100, 50, 10, 5, 1};

int solve(int n){
  
  if(!n) return 0;
  if(n<0) return 1<<28;
  if(memo[n]) return memo[n];
  
  int ans = 1<<28;
  for(int i=0;i<6;i++) ans = min(ans, solve(n-p[i])+1);
  
  return memo[n] = ans;
}

int main(){
  
  for(int i=0;i<1111;i++) solve(i);

  int n;
  while(cin >> n, n) cout << solve(1000-n) << endl;
  
}