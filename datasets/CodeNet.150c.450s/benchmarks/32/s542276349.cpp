#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  while (true) {
    int m, nmin, nmax;
    cin >> m >> nmin >> nmax;

    if (m == 0) {
      break;
    }
    
    vector<int> P(m);
    for (int i = 0; i < m; i++) {
      cin >> P[i];
    }

    sort(P.begin(), P.end());

    int maxgap = 0;
    int maxidx = 0;
    for (int i = m - nmax; i <= m - nmin; i++) {
      int gap = P[i] - P[i - 1];
      if (gap > maxgap) {
	maxgap = gap;
	maxidx = i;
      }
    }

    cout << m - maxidx << endl;
  }
}