#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> stairs(31, 0);
  stairs[0] = 1;
  for (int i = 0; i < 31; ++i) {
    if (i+1 < 31)
      stairs[i+1] += stairs[i];
    if (i+2 < 31)
      stairs[i+2] += stairs[i];
    if (i+3 < 31)
      stairs[i+3] += stairs[i];
  }

  int n;
  while (cin >> n) {
    if (n == 0)
      break;

    int ans = stairs[n];
    if (ans % 10 != 0)
      ans += 9;
    ans /= 10;

    if (ans % 365 != 0)
      ans += 364;
    ans /= 365;

    cout << ans << endl;
  }
  return 0;
}