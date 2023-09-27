#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  while (cin >> n, n) {
    vector<int> mp(n + 10, 0);
    mp[0] = 1;
    for (int i = 0; i <= n; i++) {
      for (int k = 1; k <= 3; k++) {
	mp[i + k] += mp[i];
      }
    }
    cout << (mp[n] + 3649) / 3650 << endl;
  }
  return 0;
}