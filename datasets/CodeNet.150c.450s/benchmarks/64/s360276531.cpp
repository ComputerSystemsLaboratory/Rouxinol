#include <iostream>
#include <string>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, q;
  bool a[2001] = {0};
  int x;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> x;
    for (int j = 2000; j >= 0; j--) {
      if (a[j]) {
        a[j + x] = true;
      }
    }
    a[x] = true;
  }

  cin >> q;
  for (int i = 0; i < q; i++) {
    cin >> x;
    if (a[x]) {
      cout << "yes" << endl;
    } else {
      cout << "no" << endl;
    }
  }

  return 0;
}