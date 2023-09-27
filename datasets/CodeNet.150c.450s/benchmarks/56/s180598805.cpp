#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  long sum = 0;
  int mi = 1000000;
  int ma = -1000000;
  int e;
  for (int i = 0; i < n; ++i) {
    cin >> e;
    mi = min(e, mi);
    ma = max(e, ma);
    sum += e;
  }
  cout << mi << " " << ma << " " << sum << endl;

  return 0;
}