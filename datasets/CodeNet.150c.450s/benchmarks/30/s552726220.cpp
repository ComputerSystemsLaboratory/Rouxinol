#include <iostream>
using namespace std;

int main() {
  int n, a[100];
  int count = 0;
  int mini;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < n; i++) {
    mini = i;

    for (int j = i; j < n; j++) {
      if (a[j] < a[mini]) {
        mini = j;
      }
    }

    if (a[i] != a[mini]) {
      swap(a[i], a[mini]);
      count++;
    }
  }

  for (int i = 0; i < n - 1; i++){
    cout << a[i] << ' ';
  }
  cout << a[n - 1] << endl;
  cout << count << endl;

  return 0;
}