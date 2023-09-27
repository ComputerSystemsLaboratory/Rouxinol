#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  vector<int> a(4), b(4);
  while (cin >> a[0]) {
    for (int i = 1; i < 4; i++) cin >> a[i];
    for (int i = 0; i < 4; i++) cin >> b[i];
    int hit = 0, blow = 0;
    for (int i = 0; i < 4; i++) {
      if (find(b.begin(), b.end(), a[i]) != b.end()) {
        if (a[i] == b[i]) hit++;
        else blow++;
      }
    }
    cout << hit << " " << blow << endl;
  }
}