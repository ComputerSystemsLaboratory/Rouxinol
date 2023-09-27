#include <iostream>
using namespace std;

// ceil() for integer dividing
#define DIVCEIL(x, y) (((x) + ((y) - 1)) / (y))

constexpr int MAX_N = 30 + 1;
int N;
int dp[MAX_N];

int main() {
  while (true) {
    cin >> N;
    if (N == 0)
      break;
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for (int i{4}; i <= N; ++i) {
      dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    }
    cout << DIVCEIL(dp[N], 365 * 10) << endl;
  }

  return 0;
}

