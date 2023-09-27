#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdint>

using namespace std;

static void inputArray(int A[], int num) {
  for (int i = 0; i < num; i++) {
    cin >> A[i];
   }
}

static vector<int> L(100000 + 1);
static vector<int> R(100000 + 1);

static uint64_t inversions = 0;

static inline void merge(int A[], int left, int mid, int right) {
  int n1 = mid - left;
  int n2 = right - mid;

  L.assign(&A[left], &A[left + n1]);
  R.assign(&A[mid], &A[mid + n2]);
  L[n1] = R[n2] = INT32_MAX;

  for (int i = 0, j = 0, k = left; k < right; k++) {
    if (L[i] <= R[j]) {
      A[k] = L[i];
      i++;
    } else {
      A[k] = R[j];
      j++;
      inversions += n1 - i;
    }
  } 
}

static inline void mergeSort(int A[], int left, int right) {
  if (left + 1 < right) {
    int mid = (left + right) / 2;
    mergeSort(A, left, mid);
    mergeSort(A, mid, right);
    merge(A, left, mid, right);
  } 
}

static vector<int> A(200000);

int main() {
  int n;
  cin >> n;

  inputArray(&A[0], n);

  mergeSort(&A[0], 0, n);
  
  cout << inversions << endl;
    
  return 0;
}

