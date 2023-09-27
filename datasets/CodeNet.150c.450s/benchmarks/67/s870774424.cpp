#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> dp(1000+1, 0);
  for (int i = 1; i < 1000; ++i) {
    int sum = i;
    for (int j = i+1; j < 1000; ++j) {
      sum += j;
      if (sum > 1000)
	break;
      ++dp[sum];
    }
  }

  int N;
  while (cin >> N) {
    if (N == 0)
      break;
    cout << dp[N] << endl;
  }
  return 0;
}