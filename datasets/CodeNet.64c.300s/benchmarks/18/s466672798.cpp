#include <bits/stdc++.h>
using namespace std;

int dp[30];

void makedp(){
  dp[0]=1;
  dp[1]=2;
  dp[2]=4;
  for(int i=3;i<30;i++)
    dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
}

int solve(int n){
  n--;
  int day = dp[n]/10;
  if(dp[n]%10) day++;

  int year = day/365;
  if(day%365) year++;

  return year;
}

int main(){
  makedp();
  for(;;){
    int n;
    cin >> n;
    if(!n) break;
    cout << solve(n) << endl;
  }
}