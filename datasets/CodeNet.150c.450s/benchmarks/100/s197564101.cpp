#include <iostream>
using namespace std;
typedef long long lli;

int main() {
  lli n;
  cin >> n;
  lli res = 1;
  for(lli i = 2; i <= n; ++i) res *= i;
  cout << res << endl;
  return 0;
}