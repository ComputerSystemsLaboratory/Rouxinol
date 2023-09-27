#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
  int m, n_min, n_max;
  int p[200];
  
  while(cin >> m >> n_min >> n_max, m) {
    for (int i = 0; i < m; i++) {
      cin >> p[i];
    }
    sort(p, p+m);

    int gap = 0;
    int ans;
    for(int i = n_max; i >= n_min; i--) {
      if(gap < p[m-i] - p[m-i-1]) {
        gap = p[m-i] - p[m-i-1];
        ans = i;
      }
    }
    cout << ans << endl;
  }
}