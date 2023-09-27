#include<bits/stdc++.h>
using namespace std;
/* 変数名を被らせない
   デバッグコードを取り除く */
#define ANSWER(x) cout<<x<<endl
#define debug(x) cout<<#x<<": "<<x
const int MAX_INT = 1000000;
int dp[31];
int n;
int solve(int a);
int main(){
  while(1){
    memset(dp,-1,sizeof(dp));
    cin >> n;
    if(n==0)break;
    cout << (solve(n)/10-1)/365+1 << endl;
  }
}
int solve(int a){
  if(dp[a] != -1)return dp[a];
  else{
    if(a == 0)return 1;
    else if(a < 0)return 0;
    else return dp[a] = solve(a-1)+solve(a-2)+solve(a-3);
  }
}