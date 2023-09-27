#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAX = 1000000;

int dp[MAX], dp_odd[MAX];

int main()
{
  vector<int> tetra;

  for (int i = 1; ; ++i) {
    int d = i * (i + 1) * (i + 2) / 6;
    if (d >= MAX)
      break;
    tetra.push_back(d);
  }

  dp[0] = dp_odd[0] = 0;
  for (int i = 1; i < MAX; ++i) {
    dp[i] = dp_odd[i] = i;
    for (int j = 0; j < tetra.size(); ++j) {
      if (tetra[j] > i)
	break;
      dp[i] = min(dp[i], dp[i-tetra[j]]+1);
      if (tetra[j] % 2 == 1)
	dp_odd[i] = min(dp_odd[i], dp_odd[i-tetra[j]]+1);
    }
  }

  int in;
  for ( ; ; ) {
    cin >> in;
    if (in == 0)
      break;
    cout << dp[in] << " " << dp_odd[in] << endl;
  }
  return 0;
}