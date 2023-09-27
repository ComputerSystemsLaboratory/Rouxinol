#include <iostream>

using namespace std;

int main()
{
  int e;
  while (cin >> e && e) {
    int m = 1 << 30;
    for (int y = 0; y <= 1000; y++) {
      for (int z = 0; z <= 100; z++) {
        int x = e - y * y - z * z * z;
        if (x >= 0)
          m = min(m, x + y + z);
      }
    }
    cout << m << endl;
  }
}