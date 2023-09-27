#include<iostream>
#include<algorithm>

using namespace std;
typedef long long Int;

Int dp[105][25], n, ans, num[105];

int main(){
 cin >> n;
 for(int i = 0;i < n - 1;i++)cin >> num[i];
 cin >> ans;
 dp[0][num[0]] = 1;
 for(int i = 1;i < n - 1;i++){
  for(int j = 0;j <= 20;j++){
   if(j - num[i] >= 0)dp[i][j] += dp[i - 1][j - num[i]];
   if(j + num[i] <= 20)dp[i][j] += dp[i - 1][j + num[i]];
  }
 }
 cout << dp[n - 2][ans] << endl;
 return 0;
}