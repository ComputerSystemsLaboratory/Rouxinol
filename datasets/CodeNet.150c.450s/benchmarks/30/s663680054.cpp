#include <iostream>
#include <cstdio>
using namespace std;

static const int N = 100 + 1;

void trace(int* a, int n);
void swapInt(int& t1, int& t2);
int selectionSort(int* a, int n);

int main() {
  int a[N], n;
  
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  int c = selectionSort(a, n);
  trace(a, n);
  printf("%d\n", c);

  return 0;
}

int selectionSort(int* a, int n) {
  int cnt = 0;
  for (int i = 0; i < n; ++i) {
    int minj = i;
    int flag = 0;
    int j;
    for (j = i + 1; j < n; ++j) {
      if (a[j] < a[minj]) { minj = j; flag = 1; }
    }
    if (flag) {
      swapInt(a[i], a[minj]);
      cnt++;
    }
  }
  return cnt;
}

void trace(int* a, int n) {
  for (int i = 0; i < n; ++i) {
    if (i) { printf(" "); }
    printf("%d", a[i]);
  }
  printf("\n");
}

void swapInt(int& t1, int& t2) {
  int temp = t1;
  t1 = t2;
  t2 = temp;
}