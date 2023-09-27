#include <bits/stdc++.h>
using namespace std;

int dp[50];

void print() {
   for (int i = 1; i < 33; i++) {
      cout << dp[i] << " ";
   }
   cout << endl;
}

void init() {
   dp[1] = 1, dp[2] = 2, dp[3] = 4;
   for (int i = 4; i < 33; i++) {
      dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
   }
}

int main() {
   init();
   while (1) {
      int n;
      cin >> n;
      if (n == 0) break;
      int day = dp[n] / 10;
      cout << max(1, day / 365 + (day % 365 != 0)) << endl;
   }

   return 0;
}
