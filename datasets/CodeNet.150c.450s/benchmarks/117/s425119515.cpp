#include <iostream>
#include <vector>
#include <cstdint>

using namespace std;

static void inputArray(uint32_t A[], int num) {
  for (int i = 0; i < num; i++) {
    cin >> A[i]; 
  }
}

static void printArray(uint32_t A[], int num) {
  for (int i = 0; i < num; i++) {
    cout << (i != 0 ? " " : "") << A[i];
  }
  cout << endl; 
}

static int compared = 0;

static vector<uint32_t> L(250000);
static vector<uint32_t> R(250000);

static inline void merge(uint32_t A[], uint32_t left, uint32_t mid, uint32_t right) {
  uint32_t n1 = mid - left;
  uint32_t n2 = right - mid;

  for (int i = 0; i < n1; i++) {
    L[i] = A[left + i];
  }

  for (int i = 0; i < n2; i++) {
    R[i] = A[mid + i];
  }

  L[n1] = R[n2] = UINT32_MAX;

  for (uint32_t i = 0, j = 0, k = left; k < right; k++) {
    compared++;
    if (L[i] <= R[j]) {
      A[k] = L[i];
      i++;
    } else {
      A[k] = R[j];
      j++;
    }
  } 
}

static inline void mergeSort(uint32_t A[], uint32_t left, uint32_t right) {
  if (left + 1 < right) {
    uint32_t mid = (left + right) / 2;
    mergeSort(A, left, mid);
    mergeSort(A, mid, right);
    merge(A, left, mid, right);
  } 
}

int main() {
  int n;
  cin >> n;

  vector<uint32_t> A(n);
  inputArray(&A[0], n);
  
  mergeSort(&A[0], 0, n);
  
  printArray(&A[0], n);
  
  cout << compared << endl;
  
  return 0;
}

