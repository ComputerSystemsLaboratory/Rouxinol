#include<iostream>
#include<algorithm>
#define INF 1<<28
using namespace std;
 
int p[222];
int memo[1000001];
int memo2[1000001];
 
int solve(int n){

  if(!n) return 0;
  if(memo[n]) return memo[n];
   
  int ans = INF;
  for(int i=1;p[i]<=n; i++) ans = min(ans, solve(n-p[i])+1);
   
  return memo[n] = ans;
}
 
int solve2(int n){
   
  if(!n) return 0;
  if(memo2[n]) return memo2[n];
   
  int ans = INF;
  for(int i=1;p[i]<=n;i++){
    if(p[i]&1) ans = min(ans, solve2(n-p[i])+1);
  }
   
  return memo2[n] = ans;
}
 
int main(){
   
  int n;
   
  for(int i=0;i<=181;i++) p[i] = i*(i+1)*(i+2)/6;
  for(int i=1;i<=1000000;i++) solve(i), solve2(i);
   
  while(cin >> n, n) cout << solve(n) << " " << solve2(n) << endl;
}