#include<bits/stdc++.h>
using namespace std;

int n;
int memo[35];

int solve(int n){
  if(memo[n] != -1)return memo[n];
  int rec = 0;
  if(n == 0 || n == 1)return memo[n] = 1;
  else if(n == 2)return memo[n] = 2;
  for(int i = 1;i <= 3;i++){
    rec += solve(n - i);
  }
  return memo[n] = rec;
}

int main(){
  while(cin >> n , n){
    memset(memo,-1,sizeof(memo));
    int ans = solve(n);
    cout << (ans - 1) / 3650 +1 <<endl;
  }
}