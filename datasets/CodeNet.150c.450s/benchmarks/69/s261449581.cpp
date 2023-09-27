#include <iostream>
#include <vector>
using namespace std;

signed main()
{
  int n;
  vector<int> kanade;
  cin >> n;

  for (int i = 0; i < n; i++) {
    kanade.clear();
    for (int j = 0; j < 10; j++) {
      int tmp;
      cin >> tmp;
      kanade.push_back(tmp);
    }

    int b = 0, c = 0;
    bool hayami = true;
    for (int j = 0; j < 10; j++) {
      if (b == 0 || b < kanade[j]) {
        b = kanade[j];
      } else if (c == 0 || c < kanade[j]) {
        c = kanade[j];
      } else {
        hayami = false;
      }
    }

    if (hayami) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return (0);
}