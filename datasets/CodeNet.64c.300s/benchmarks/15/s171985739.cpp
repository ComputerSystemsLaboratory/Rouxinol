#include <iostream>
#include <algorithm>
using namespace std;

void trace(int a[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    if (i != 0) cout << " ";
    cout << a[i];
  }
  cout << endl;
}

int selectionSort(int a[], int n) {
  int i, j, minj, swnum = 0;
  for (i = 0; i < n; i++) {
    minj = i;
    for (j = i; j < n; j++) {
      if (a[j] < a[minj]) minj = j;
    }
    swap(a[i], a[minj]);
    if (a[i] != a[minj]) swnum++;
  }
  return swnum;
}

int main(void) {
  int i, n, j, k, v;
  cin >> n;
  int a[n];
  for (i = 0; i < n; i++) cin >> a[i];
  int swnum = selectionSort(a, n);
  trace(a, n);
  cout << swnum << endl;
  return 0;
}