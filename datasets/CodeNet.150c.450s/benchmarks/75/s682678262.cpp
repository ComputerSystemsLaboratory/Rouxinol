#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;
 
static inline int left(int i) {
  return 2 * i;
}

static inline int right(int i) {
    return 2 * i + 1;
}

static void maxHeapify(vector<int>& A, int i) {
  const int l = left(i);
  const int r = right(i);

  const int H = A.size() - 1;
  int largest = 0;
  if (l <= H && A[l] > A[i]) {
     largest = l;
    } else {
      largest = i;
    }

    if (r <= H && A[r] > A[largest]) {
      largest = r;
    }
    
    if (largest != i) {
      swap(A[i], A[largest]);  
      maxHeapify(A, largest);
    }    
}

static void buildMaxHeap(vector<int>& A) {
  const int H = A.size() - 1;
  for (int i = H / 2; i > 0; i--) {
    maxHeapify(A, i);
  }
}

static vector<int> A;

int main() {
  int h;
  cin >> h;

  A.resize(h + 1);

  int k;
  for (int i = 1; i < A.size(); i++) {
    cin >> k;
    A[i] = k;
  }
  
  buildMaxHeap(A);
  
  for (int i = 1; i < A.size(); i++) {
    cout << " " << A[i];
  }
  cout << endl;

  return 0;
}

