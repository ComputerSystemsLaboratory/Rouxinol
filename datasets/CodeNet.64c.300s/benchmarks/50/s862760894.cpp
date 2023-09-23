#include <iostream>
using namespace std;

void swap(int &x, int &y) {
  int tmp;
  tmp = x;
  x = y;
  y = tmp;
}

int bubbleSort(int *a, int n) {
  int res = 0;
  bool flag = 1;
  while (flag) {
    flag = 0;
    for (int j=n-1; j>0; j--) {
      if (a[j-1] > a[j]) {
        swap(a[j], a[j-1]);
        flag = 1;
        res++;
      }
    }
  }
  return res;
}

int main() {
  int N, A[100], cnt;
  cin >> N;
  for (int i=0; i<N; i++) {
    cin >> A[i];
  }
  cnt = bubbleSort(A, N);

  for (int i=0; i<N; i++) {
    cout << A[i];
    if (i < N - 1) cout << " ";
  }
  cout << endl;
  cout << cnt << endl;

  return 0;
}