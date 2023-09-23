#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <utility>
using namespace std;

#define rep(i,n) for(int (i)=0; (i)<(int)(n); ++(i))
#define foreach(c,i) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();i++)

int n;
int dp[32];

int main() {
  dp[0] = dp[1] = 1;
  for (int i = 2; i < 31; ++i) {
    for (int j = 1; j <= 3; ++j) {
      if (i - j >= 0) {
        dp[i] += dp[i - j];
      }
    }
  }
  while (cin >> n, n) {
    int nums = dp[n];
    int days = nums / 3650;
    if (nums % 3650) days++;
    cout << days << endl;
  }
  return 0;
}