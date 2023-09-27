#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

int main()
{
  int e;
  while (cin >> e && e != 0) {
    int ans = numeric_limits<int>::max();
    for (int z = 0; z*z*z <= e; z++) {
      const int c = e - z*z*z;
      const int y1 = int(sqrt(double(c)));
      const int m = min(c+z, c-y1*y1+y1+z);
      ans = min(ans, m);
    }
    cout << ans << endl;
  }
  return 0;
}