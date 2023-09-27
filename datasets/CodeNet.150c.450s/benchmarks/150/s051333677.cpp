#include <iostream>
using namespace std;

const int MAX_SIZE = 2000000;
int A[MAX_SIZE];
int B[MAX_SIZE];
int C[MAX_SIZE];

void coutingSort(int a[], int n, int b[], int k) {
  int C[k];
  for (int i = 0; i < k; i++) {
    C[i] = 0;
  }

  for (int i = 0; i < n; i++) {
    C[a[i]]++;
  }

  for (int i = 1; i < k; i++) {
    C[i] += C[i-1];
  }

  for (int i = 0; i < n; i++) {
    b[C[a[i]]] = a[i];
    C[a[i]]--;
  }
}

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) cin >> A[i];
  coutingSort(A, n, B, 10000);
  for (int i = 1; i <= n; i++) {
    if (i > 1) cout << " ";
    cout << B[i];
  }
  cout << endl;
}

