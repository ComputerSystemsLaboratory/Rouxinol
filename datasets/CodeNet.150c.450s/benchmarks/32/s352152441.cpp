#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  
  while (1) {

    int n, nmin, nmax, x;
    vector<int> vc;

    cin >> n >> nmin >> nmax;
    if (n == 0 && nmin == 0 && nmax == 0) break;

    for (int i = 0; i < n; i++) {
      cin >> x;
      vc.push_back(x);
    }

    sort(vc.begin(), vc.end());
    reverse(vc.begin(), vc.end());

    int gap = 0;
    int ans = 0;

    for (int i = nmin - 1; i < nmax; i++) { 
      int tmp = vc[i] - vc[i + 1];
      if (tmp >= gap) {
        gap = tmp;
        ans = i + 1;
      }
    }

    cout << ans << endl;
  }
}

