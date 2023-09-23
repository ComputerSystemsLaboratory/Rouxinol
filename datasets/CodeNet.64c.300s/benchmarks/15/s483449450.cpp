#include <iostream>

using namespace std;

int selectionSort(int *a, int n) {
  int counter = 0;
  for (int i = 0; i < n; i++) {
    int minj = i;
    for (int j = i; j < n; j++) {
      if (a[j] < a[minj]) minj = j;
    }
    if (a[i] > a[minj]) {
      swap(a[i], a[minj]);
      counter++;
    }
  }
  return counter;
}

int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) cin >> a[i];

  int counter;
  counter = selectionSort(a, n);

  for (int i = 0; i < n; i++) {
    if (i) cout << " ";
    cout << a[i];
  }
  cout << endl;
  cout << counter << endl;
  return 0;
}

