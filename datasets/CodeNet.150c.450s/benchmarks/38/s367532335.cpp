#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
  int n;
  while(cin >> n) {
    vector<string> ans;
    for (int i = 0; i < n; ++i) {
      int x, y, z;
      cin >> x >> y >> z;
        if (x * x == y * y + z * z || y * y == z * z + x * x || z * z == x * x + y * y) {
          ans.push_back("YES");
      } else {
        ans.push_back("NO");
      }
    }
    for (int i = 0; i < n; ++i) {
      cout << ans[i] << endl;
    }
  }
  return 0;
}