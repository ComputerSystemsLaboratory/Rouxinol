#include<bits/stdc++.h>
using namespace std;
#define int long long
int memo[50];
int fib(int n){
  if(~memo[n]) return memo[n];
  if(n<=1) return 1;
  return memo[n]=(fib(n-1)+fib(n-2));
}
signed main(){
  int n;
  cin>>n;
  memset(memo,-1,sizeof(memo));
  cout<<fib(n)<<endl;
  return 0;
}