#include <cstdio>
#include <iostream>

using namespace std;

namespace {

void Print(const int* a, int n) {
  for (int i = 0; i < n; ++i) {
    if (i > 0) printf(" ");
    printf("%d", a[i]);
  }
  printf("\n");
}

void InsertionSort(int* a, int n) {
  Print(a, n);
  for (int i = 1; i < n; ++i) {
    const int v = a[i];
    int j = i - 1;
    while (j >= 0 && a[j] > v) {
      a[j + 1] = a[j];
      --j;
    }
    a[j + 1] = v;
    Print(a, n);
  }
}
} // namespace

int main() {
  int n;
  int a[100];

  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  InsertionSort(a, n);
  return 0;
}