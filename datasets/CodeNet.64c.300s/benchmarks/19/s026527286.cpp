#include <iostream>
#include <algorithm>
const int MAX_N = 5000;
using namespace std;

int main(void) {
  int n;
  while (cin >> n) {
    if (n == 0) break;
    int dp[MAX_N];
    cin >> dp[0];

    int max_num = dp[0];
    for (int i = 1; i < n; i++) {
      int tmp;
      cin >> tmp;
      dp[i] = max(dp[i-1]+tmp, tmp);
      max_num = max(max_num, dp[i]);
    }

    cout << max_num << endl;
  }
  return 0;
}