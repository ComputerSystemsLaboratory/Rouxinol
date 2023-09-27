#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int n, s;
  while (cin >> n >> s && !(n == 0 && s == 0)) {
    vector<bool> arr(10, true);
    for (int i = 0; i < n; i++) {
      arr[i] = false;
    }

    int ans = 0;
    do {
      int m = 0;
      for (int i = 0; i < 10; i++) {
        if (!arr[i]) {
          m += i;
        }
      }
      if (m == s) {
        ans++;
      }
    } while (next_permutation(arr.begin(), arr.end()));
    cout << ans << endl;
  }
  return 0;
}