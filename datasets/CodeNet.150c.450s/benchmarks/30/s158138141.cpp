#include <cstdio>
#include <iostream>

using namespace std;

namespace {

// SelectionSort sorts the array |a| in ascending order, and then returns
// the number of swap operations.
int SelectionSort(int* a, int n) {
  int nswap = 0;

  for (int i = 0; i < n; ++i) {
    int minj = i;
    for (int j = i + 1; j < n; ++j) {
      if (a[j] < a[minj]) {
        minj = j;
      }
    }
    if (i != minj) {
      ++nswap;
      const int t = a[i];
      a[i] = a[minj];
      a[minj] = t;
    }
  }

  return nswap;
}

void Print(const int* a, int n) {
  for (int i = 0; i < n; ++i) {
    if (i > 0) printf(" ");
    printf("%d", a[i]);
  }
  printf("\n");
}

} // namespace

int main() {
  int n;
  cin >> n;
  int a[100];
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  const int r = SelectionSort(a, n);
  Print(a, n);
  cout << r << endl;
  return 0;
}