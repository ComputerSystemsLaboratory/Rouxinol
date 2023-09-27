#include <iostream>
using namespace std;

int comp;

void Marge(int A[], int left, int mid, int right) {
  int n1 = mid - left;
  int n2 = right - mid;

  static int L[250001], R[250001];
  for (int i = 0; i < n1; i++) L[i] = A[left + i];
  for (int i = 0; i < n2; i++) R[i] = A[mid + i];
  L[n1] = 1000000001; R[n2] = 1000000001;

  int i = 0, j = 0;
  for (int k = left; k < right; k++) {
    if (L[i] <= R[j]) {
      A[k] = L[i];
      i++;
      comp++;
    } else {
      A[k] = R[j];
      j++;
      comp++;
    }
  }
}

void MargeSort(int A[], int left, int right) {
  if (left + 1 < right) {
    int mid = (left + right) / 2;
    MargeSort(A, left, mid);
    MargeSort(A, mid, right);
    Marge(A, left, mid, right);
  }
}

int main() {
  int n; cin >> n;
  static int S[500000]; for (int i = 0; i < n; i++) cin >> S[i];

  MargeSort(S, 0, n);

  for (int i = 0; i < n; i++) {
    if (i == n - 1) cout << S[i] << endl;
    else cout << S[i] << " ";
  }
  cout << comp << endl;

  return 0;
}
