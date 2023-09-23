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

void bubblesort(int a[], int n) {
  int chnum = 0;
  bool flag = true;
  while (flag) {
    int i;
    flag = false;
    for (i = n - 1; i > 0; i--) {
      if (a[i] < a[i-1]) {
        int tmp = a[i];
        a[i] = a[i - 1];
        a[i - 1] = tmp;
        chnum++;
        flag = true;
      }
    }
  }
  trace(a, n);
  cout << chnum << endl;
}

int main(void) {
  int i, n, j, k, v;
  cin >> n;
  int a[n];
  for (i = 0; i < n; i++) cin >> a[i];
  bubblesort(a, n);
  return 0;
}