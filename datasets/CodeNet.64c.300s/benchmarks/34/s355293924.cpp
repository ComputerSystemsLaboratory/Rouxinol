#include <iostream>
using namespace std;

int main() {
  int n;
  int a[100];

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (i != 0) cout << ' ';
    cout << a[i];
  }
  cout << endl;

  for (int i = 1; i < n; i++) {
    int key = a[i];
    int j = i - 1;
    while (j >= 0 && a[j] > key) {
      a[j + 1] = a[j];
      j--;
    }
    a[j + 1] = key;

    for (int i = 0; i < n; i++) {
      if (i != 0) cout << ' ';
      cout << a[i];
    }
    cout << endl;
  }

  return 0;
}