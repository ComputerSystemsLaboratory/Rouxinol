#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
  int n, in, min_d, max_d;

  cin >> n;   // n???
  cin >> in;  // ???????????????
  min_d = in; // ?????????
  max_d = INT_MIN; // ?????????

  for (int i = 1; i < n; ++i) {
    cin >> in;
    max_d = max(max_d, in - min_d);
    min_d = min(min_d, in);
  }

  cout << max_d << endl;

  return 0;
}