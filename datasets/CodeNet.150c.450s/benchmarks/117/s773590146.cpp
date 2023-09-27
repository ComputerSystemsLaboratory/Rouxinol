#include <cstdio>
#include <iostream>
using namespace std;

#define INFTY 1000000001

int merge(int A[], int left, int mid, int right)
{
  int n1 = mid - left, n2 = right - mid;
  int L[n1 + 1], R[n2 + 1];
  for (int i = 0; i < n1; i++) {
    L[i] = A[left + i];
  }
  for (int i = 0; i < n2; i++) {
    R[i] = A[mid + i];
  }
  L[n1] = INFTY;
  R[n2] = INFTY;
  int i = 0, j = 0, count = 0;
  for (int k = left; k < right; k++) {
    if (L[i] <= R[j]) {
      A[k] = L[i];
      i++;
    } else {
      A[k] = R[j];
      j = j + 1;
    }
    count++;
  }
  return count;
}

int mergeSort(int A[], int left, int right)
{
  int count = 0;
  if ((left + 1) < right) {
    int mid = (left + right)/2;
    count += mergeSort(A, left, mid);
    count += mergeSort(A, mid, right);
    count += merge(A, left, mid, right);
  }
  return count;
}

int main() {
  int n;
  cin >> n;
  int S[n], count;
  for (int i = 0; i < n; i++) cin >> S[i];
  count = mergeSort(S, 0, n);
  for (int i = 0; i < n; i++) {
    if (i) cout << " ";
    cout << S[i];
  }
  cout << endl << count << endl;
  return 0;
}