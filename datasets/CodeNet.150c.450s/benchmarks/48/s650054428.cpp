#include<iostream>

using namespace std;

#define rep(i, n) for (int i = 0; i < int(n); ++i)

int main() {
  while (true) {
    int e;
    cin >> e;
    if (e == 0) break;
    int res = e;
    for (int z = 0; z * z * z <= e; ++z) {
      int ee = e - z * z * z;
      for (int y = 0; y * y <= ee; ++y) {
	int eee = ee - y * y;
	res = min(eee + y + z, res);
      }
    }
    cout << res << endl;
  }
  return 0;
}