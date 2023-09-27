#include <iostream>

using namespace std;

int main(void) {
  int n, minv, maxv = -1000000000;
  int ary[200000];

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> ary[i];

    if (i == 0) {
      minv = ary[0];
      continue;
    }

    if (ary[i] - minv > maxv) maxv = ary[i] - minv;
    if (ary[i] < minv) minv = ary[i];
  }

  cout << maxv << endl;

  return 0;
}