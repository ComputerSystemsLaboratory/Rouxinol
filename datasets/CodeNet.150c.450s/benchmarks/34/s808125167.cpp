#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int main() {
  int a;
  int dp[31] = {1};
  for(int i = 0; i < 31; i++) {
    for(int j = 1; j <= 3; j++) {
      dp[i + j] += dp[i];
    }
  }
  while(cin >> a) {
    if(a == 0) break;
    if(dp[a] % 3650 == 0) {
      cout << dp[a] / 3650 << endl;
    }else {
      cout << dp[a] / 3650 + 1 << endl;
    }
  }
}