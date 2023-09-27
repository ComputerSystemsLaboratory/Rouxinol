#include <iostream>
using namespace std;

const int K = 10005;
const int MAX = 2000005;
int B[MAX], C[K];

void countingSort(int A[], int n) {
  for (int i = 0; i < K; i++) {
    C[i] = 0;
  }
  
  for (int i = 0; i < n; i++) {
    C[A[i]]++;
  }

  for (int i = 0; i < K - 1; i++) {
    C[i+1] += C[i];
  }

  for (int i = 0; i < n; i++) {
    B[C[A[i]] - 1] = A[i];
    C[A[i]]--;
  }
}

int main() {
  int n, A[MAX];
  cin >> n;
  for (int i = 0; i < n; i++) cin >> A[i];

  countingSort(A, n);
  for (int i = 0; i < n; i++) {
    if (i) cout << " ";
    cout << B[i];
  }
  cout << endl;
}

