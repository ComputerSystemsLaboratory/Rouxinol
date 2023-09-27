#include <cstdio>
#include <iostream>

using namespace std;

namespace {

// BubbleSort sorts the array |a| in ascending order, and then returns
// the number of swap operations.
int BubbleSort(int* a, int n) {
  int nswap = 0;
  bool flag = true;
  while (flag) {
    flag = false;
    for (int j = n - 1; j >= 1; --j) {
      if (a[j] < a[j - 1]) {
        const int t = a[j - 1];
        a[j - 1] = a[j];
        a[j] = t;
        ++nswap;
        flag = true;
      }
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

  const int r = BubbleSort(a, n);
  Print(a, n);
  cout << r << endl;
  return 0;
}