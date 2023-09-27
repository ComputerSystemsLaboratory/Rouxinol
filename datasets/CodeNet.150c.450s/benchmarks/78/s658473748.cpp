#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int main()
{
  static const int N = 1000000;

  vector<int> vs;
  for (int i = 1; ; i++) {
    const int x = i*(i+1)*(i+2)/6;
    if (x >= N) {
      break;
    }
    vs.push_back(x);
  }

  vector<int> dp(N, numeric_limits<int>::max()), dp_odd(N, numeric_limits<int>::max());
  dp[0] = dp_odd[0] = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < vs.size(); j++) {
      if (i + vs[j] < N) {
        dp[i+vs[j]] = min(dp[i+vs[j]], dp[i]+1);
        if (vs[j] % 2 == 1) {
          dp_odd[i+vs[j]] = min(dp_odd[i+vs[j]], dp_odd[i]+1);
        }
      } else {
        break;
      }
    }
  }

  int n;
  while (cin >> n && n != 0) {
    cout << dp[n] << ' ' << dp_odd[n] << endl;
  }
  return 0;
}