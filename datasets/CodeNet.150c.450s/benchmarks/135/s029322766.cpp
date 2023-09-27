#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
#define int long long

const int MAX = 1500001;

int hcount[MAX], wcount[MAX];

signed main() {
  while (true) {
    int n, m;
    cin >> n >> m;
    if (!n && !m) return 0;
    fill(hcount, hcount + MAX, 0);
    fill(wcount, wcount + MAX, 0);
    int h[n], w[m];
    for (int i = 0; i < n; i++) {
      cin >> h[i];
    }
    for (int i = 0; i < m; i++) {
      cin >> w[i];
    }
    int hsum[n], wsum[m];
    hsum[0] = h[0];
    for (int i = 1; i < n; i++) {
      hsum[i] = hsum[i - 1] + h[i];
    }
    wsum[0] = w[0];
    for (int i = 1; i < m; i++) {
      wsum[i] = wsum[i - 1] + w[i];
    }
    for (int i = 0; i < n; i++) {
      hcount[hsum[i]]++;
      for (int j = i - 1; j >= 0; j--) {
        hcount[hsum[i] - hsum[j]]++;
      }
    }
    for (int i = 0; i < m; i++) {
      wcount[wsum[i]]++;
      for (int j = i - 1; j >= 0; j--) {
        wcount[wsum[i] - wsum[j]]++;
      }
    }
    int count = 0;
    for (int i = 1; i < MAX; i++) {
      count += hcount[i] * wcount[i];
    }
    cout << count << endl;
  }
}

