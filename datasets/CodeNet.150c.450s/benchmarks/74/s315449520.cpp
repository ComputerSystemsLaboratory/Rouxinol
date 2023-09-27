#include<iostream>
#include<algorithm>
using namespace std;

int dp[50000] = { 0 };
int n,m,c[20];

int solve(int money){
 if(money < 0) return 1<<30;
 if(money==0)return 0;
 if(dp[money] != 0) return dp[money];
 int ans = 1 << 30; 
 for(int i=0; i < m;i++){
  ans = min(solve(money-c[i])+1,ans);
 }
 dp[money] = ans;
 return dp[money];
}

int main(){
 cin >> n;
 cin >> m;
 for(int i = 0;i < m;i++){
  cin >> c[i];
 }
 cout << solve(n) << endl;
}