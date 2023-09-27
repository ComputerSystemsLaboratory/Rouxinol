/**
 <Merge Sort>

 http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_5_B
 
 Shunji Lin
 26/01/2016
 **/

#include <cstdio>
#include <vector>

const long int  sentinel = 10e9 + 1; // indicate end of vector
static int comparisons = 0; // number of comparisons

// merge step, sort A in given index boundaries
void merge(std::vector<long int> &A, long int left, long int mid, long int right) {
  int n1 = mid - left + 1; // length of left array, contains [left, mid]
  int n2 = right - mid; // length of right array, contains (mid, right]

  //temporary left, right vectors
  std::vector<long int> L(n1 + 1);
  std::vector<long int> R(n2 + 1);

  for (int i = 0; i < n1; ++i) {
    L[i] = A[left + i]; // populate left vector with [left, mid]
  }
  for (int i = 0; i < n2; ++i) {
    R[i] = A[mid + 1 +  i]; // populate right vector with (mid, right]
  }

  L[n1] =  R[n2] = sentinel; 

  int i = 0, j = 0;

  // merge
  for (int k = left; k <= right; ++k) {
    if (L[i] <= R[j]) {
      A[k] = L[i];
      ++i;
    } else {
      A[k] = R[j];
      ++j;
    }
    ++comparisons; 
  }
}
      
// main merge sort function
void merge_sort(std::vector <long int> &A, long int left, long int right) {
  if (left < right) { // terminate when target indexes of length 1
    int mid = (left + right) / 2;
    merge_sort(A, left, mid);
    merge_sort(A, mid + 1, right);
    merge(A, left, mid, right);
  }
}

int main() {
  int n; // number of elements
  scanf("%d", &n);
  
  std::vector<long int> A(n);

  //populate vector A
  for (int i = 0; i < n; ++i) {
    scanf("%ld", &A[i]);
  }
  
  merge_sort(A, 0, n-1);
  for (int i = 0; i < n - 1; ++i) {
    printf("%ld ", A[i]);
  }
  printf("%ld\n", A[n-1]);
  
  printf("%d\n", comparisons);
}