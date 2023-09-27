#include <iostream>
#include <vector>

using namespace std;


int main() {
  while (true) {
    int m, nmin, nmax;
    cin >> m >> nmin >> nmax;

    if (m + nmin + nmax == 0) {
      break;
    }
    vector<int> p(m);
    for (int i = 0; i < m; i++) {
      cin >> p[i];
    }

    int gapMax = -1;
    int gapMaxIdx = -1;
    for (int i = nmin - 1; i <= nmax - 1; i++) {
      int temp = p[i] - p[i + 1];
      if (temp >= gapMax) {
        gapMax = temp;
        gapMaxIdx = i;
      }
    }

    cout << gapMaxIdx + 1 << endl;
   
  }
  
  return 0;
}