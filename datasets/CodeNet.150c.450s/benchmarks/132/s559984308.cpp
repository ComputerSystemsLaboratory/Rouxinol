#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main() {
  int n, p, ans;
  while (cin >> n, cin >> p, n && p) {
    vector<int> has(n, 0);
    int stone = p;
    while (true) {
      for (int i = 0; i < n; i++) {
        if (stone > 0) {
          stone--;
          has[i]++;
          if (has[i] == p) {
            ans = i;
            goto FIN;
          }
        } else {
          stone += has[i];
          has[i] = 0;
        }
        //cerr << has[i] << " ";
      }
      //cerr << endl;
    }
  FIN:
    cout << ans << endl;
  }
  return 0;
}