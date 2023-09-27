#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, p;
  for(;;) {
    cin >> n >> p;
    if ((n|p) == 0) {
      break;
    }
    vector<int> m(n);
    int own = p;
    int ite = 0;
    for (;;) {
      if (own > 0) {
        m[ite]++;
        own--;
      } else {
        own = m[ite];
        m[ite] = 0;
      }

      if (m[ite] == p) {
        break;
      }
      ++ite;
      ite %= n;
    }
    cout << ite << endl;
  }
  return 0;
}