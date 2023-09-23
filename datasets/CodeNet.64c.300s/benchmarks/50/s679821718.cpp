#include <iostream>
#include <cstdio>
using namespace std;

static const int N = 100 + 1;

void trace(int* a, int n);
/* ???????????°????????? */
int bubbleSort(int* a, int n);
void swapInt(int& t1, int& t2);

int main() {
  int a[N], n;
  
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  int c = bubbleSort(a, n);
  trace(a, n);
  cout << c << endl;
}

void trace(int* a, int n) {
  for (int i = 0; i < n; ++i) {
    if (i) { printf(" "); }
    printf("%d", a[i]);
  }
  printf("\n");
}

int bubbleSort(int* a, int n) {
  int count = 0;
  bool flag = 1;
  for (int i = 0; flag; ++i) {
    flag = 0;
    for (int j = n - 1; j >= i + 1; --j) {
      if (a[j] < a[j - 1]) {
        swap(a[j], a[j - 1]);
        flag = 1;
        count++;
      }
    }
  }
  return count;
}

void swapInt(int& t1, int& t2) {
  int temp = t1;
  t1 = t2;
  t2 = temp;
}