// Last Change: 12/28/2018 23:35:37.
#include <algorithm>
#include <array>
#include <bitset>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>

using namespace std;
using ll = long long;

int dp[50];

ll Fib(int n) {
  if (dp[n] == 0) {
    dp[n] = Fib(n - 1) + Fib(n - 2);
  }
  return dp[n];
}

int main() {
  dp[0] = dp[1] = 1;
  int n;
  cin >> n;
  cout << Fib(n) << endl;
}

