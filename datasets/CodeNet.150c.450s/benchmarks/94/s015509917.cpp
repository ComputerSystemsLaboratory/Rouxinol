#include<iostream>
using namespace std;

int bubble_sort(int A[], int N) {
  int i, tmp, cnt, sorted;
  bool flag = 1;
  cnt = 0;
  sorted = 0;
  
  while (flag == 1) {
    flag = 0;
    for (i = 0; i <  N - 1 - sorted; i++) {
      if (A[i] > A[i+1]) {
        // swap
        tmp = A[i+1];
        A[i+1] = A[i];
        A[i] = tmp;
        
        cnt++;
        flag = 1;
      }
    }
    sorted++;
  }

  return cnt;
}

int main() {
  int i, N, cnt;
  int A[100];
  
  cin >> N;
  for (i = 0; i < N; i++) cin >> A[i];

  cnt = bubble_sort(A, N);

  for (i = 0; i < N; i++) {
    if (i > 0) cout << ' ';
    cout << A[i];
  }
  cout << endl;
  cout << cnt << endl;

  return 0;
}
