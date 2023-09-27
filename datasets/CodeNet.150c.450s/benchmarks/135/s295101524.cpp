#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <functional>

using namespace std;


int main() {
  while (true) {
    int n, m;
    cin >> n >> m;
    if (n + m == 0) {
      break;
    }
    vector<int> h(n);
    vector<int> w(m);
    vector<int> t(1500001);
    vector<int> t2(1500001);
    
    for (int i = 0; i < n; i++) {
      cin >> h[i];
    }

    for (int i = 0; i < m; i++) {
      cin >> w[i];
    }

    for (int i = 0; i < n; i++) {
      int len = 0;
      for (int j = i; j < n; j++) {
        len += h[j];
        t[len]++;
      }
    }

    for (int i = 0; i < m; i++) {
      int len = 0;
      for (int j = i; j < m; j++) {
        len += w[j];
        t2[len]++;
      }
    }

    int ans = 0;
    for (int i = 0; i < 1500001; i++) {
      ans += t[i] * t2[i];
    }

    cout << ans << endl;

  }

  return 0;
}