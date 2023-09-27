#include <iostream>
#include <string>
using namespace std;

int c = 0;

void merge(int A[], int left, int mid, int right) {
  int i,j,k;

  int n1 = mid - left;
  int n2 = right - mid;
  int L[n1];
  int R[n2];

  for (i = 0; i < n1; i++) {
    L[i] = A[left + i];
  }

  for (i = 0; i < n2; i++) {
    R[i] = A[mid + i];
  }
  L[n1] = 1000000001;
  R[n2] = 1000000001;

  i = 0;
  j = 0;
  for (k = left; k < right; k++) {
    c++;
    if (L[i] <= R[j]) {
      A[k] = L[i];
      i++;
    } else {
      A[k] = R[j];
      j++;
    }
  }
}

void mergeSort(int A[], int left, int right) {
  if (left + 1 < right) {
    int mid = (left + right) / 2;
    mergeSort(A, left, mid);
    mergeSort(A, mid, right);
    merge(A, left, mid, right);
  }
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  int S[500001];
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> S[i];
  }

  mergeSort(S, 0, n);

  cout << S[0];
  for (int i = 1; i < n; i++) {
    cout << " " << S[i];
  }
  cout << endl;
  cout << c << endl;
}