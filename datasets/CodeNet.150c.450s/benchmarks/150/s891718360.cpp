#include <iostream>
#include <algorithm>
using namespace std;

int n;

void countingSort(int a[], int b[], int k) {
  int c[k + 1];
  for (int i = 0; i < k + 1; i++) {
    c[i] = 0;
  }

  for (int i = 0; i < n; i++) {
    c[a[i]]++;
  }

  for (int i = 1; i < k + 1; i++) {
    c[i] += c[i - 1];
  }

  for (int i = n - 1; i >= 0; i--) {
    b[c[a[i]] - 1] = a[i];
    c[a[i]]--;
  }
}

int main() {
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int maxi = a[0];
  for (int i = 0; i < n; i++) {
    maxi = max(a[i], maxi);
  }
  int b[n];
  countingSort(a, b, maxi);

  cout << b[0];
  for (int i = 1; i < n; i++) {
    cout << ' ' << b[i];
  }
  cout << endl;
}