#include <algorithm>
#include <cmath>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <vector>
using namespace std;
const int INT_INF = 500000000;
const long long LONG_LONG_INF = (long long)pow(10, 18);
const int MOD = pow(10, 9) + 7;
/* contest template */
int n;
long long fib[45];

int main() {
  cin >> n;
  fib[0] = 1;
  fib[1] = 1;
  for (int i = 2; i <= 44; i++) {
    fib[i] = fib[i - 1] + fib[i - 2];
  }
  cout << fib[n] << endl;
  return 0;
}
