#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cstdint>

using namespace std;

const static int INFTY = (1<<30);
static vector<int> A(2000000 + 1);
static int H = 0;
 
static inline int parent(int i) {
  return i / 2;
}
 
static inline int left(int i) {
  return 2 * i;
}

static inline int right(int i) {
    return 2 * i + 1;
}

static inline void maxHeapify(vector<int>& A, int i) {
  const int l = left(i);
  const int r = right(i);

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

static void heapIncreaseKey(vector<int>& A, int i, int key) {
  if (key < A[i]) {
    printf("エラー：新しいキーは現在のキーより小さい\n");
    return;
  }
  A[i] = key;
  while (i > 1 && A[parent(i)] < A[i]) {
    swap(A[i], A[parent(i)]);
    i = parent(i);
  }
}

static void insert(vector<int>& A, int key) {
  H++;
  A[H] = -INFTY;
  heapIncreaseKey(A, H, key);
}

static int extract(vector<int>& A) {
  if (H < 1) {
    printf("エラー：ヒープアンダーフロー\n");
    return 0;
  }
  int max = A[1];
  A[1] = A[H--];
  maxHeapify(A, 1);

  return max;
}

int main() {
  string command;
  int v;
  while (true) {
    cin >> command;
    if (command[0] == 'i') {
      scanf("%d", &v);
      insert(A, v);
    } else if (command[0] == 'e' && command[1] == 'x') {
      cout << extract(A) << endl;
    } else {
      break;
    }
  }
  return 0;
}

