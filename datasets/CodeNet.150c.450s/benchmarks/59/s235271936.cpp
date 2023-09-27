#include <iostream>
using namespace std;

#define MAX_N 100 + 1

void insertionSort(int* a, int n);
void printA(int* a, int n);

int main() {
  int a[MAX_N], n;
  
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  printA(a, n);
  insertionSort(a, n);

  return 0;
}

void insertionSort(int* a, int n) {
  for (int i = 1; i < n; ++i) {
    int v = a[i];
    int j = i - 1;
    while (j >= 0 && a[j] > v) {
      a[j + 1] = a[j];
      j--;
    }
    a[j + 1] = v;

    printA(a, n);
  }
}

void printA(int* a, int n) {
  for (int i = 0; i < n; ++i) {
    cout << a[i];
    if (i + 1 < n) { cout << ' '; }
  }
  cout << '\n';
}