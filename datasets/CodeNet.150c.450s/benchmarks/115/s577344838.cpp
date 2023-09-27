#include <cstdint>
#include <string>
#include <utility>

using namespace std;

#define MAX_LEN 1001
static size_t memo[MAX_LEN][MAX_LEN];

size_t lcs(string &a, string &b)
{
  for (uint32_t i = 0; i <= a.size(); i++) {
    memo[i][0] = 0;
  }

  for (uint32_t i = 0; i <= b.size(); i++) {
    memo[0][i] = 0;
  }

  for (uint32_t i = 1; i <= a.size(); i++) {
    for (uint32_t j = 1; j <= b.size(); j++) {
      if (a[i - 1] == b[j - 1]) {
        memo[i][j] = memo[i - 1][j - 1] + 1;
      } else {
        memo[i][j] = max(memo[i - 1][j], memo[i][j - 1]);
      }
    }
  }

  return memo[a.size()][b.size()];
}

#include <iostream>

int32_t main()
{
  uint32_t num;
  cin >> num;

  for (uint32_t i = 0; i < num; i++) {
    string a, b;
    cin >> a;
    cin >> b;
    cout << lcs(a, b) << endl;
  }

  return 0;
}