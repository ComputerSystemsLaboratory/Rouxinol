#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define repR(i, n) for(int i = (n) - 1; i > -1; i--)
#define rep1(i, n) for(int i = 1; i < (int)(n + 1); i++)
#define rep1R(i, n) for(int i = (n); i > 0; i--)
using namespace std;

int H = 0;
int A[2000010];

int parent(int i) { return i / 2; }
int left(int i) { return 2 * i; }
int right(int i) { return 2 * i + 1; }

void maxHeapify(int i) {
  int l = left(i);
  int r = right(i);

  int largest;
  if (l <= H && A[l] > A[i]) largest = l;
  else largest = i;
  if (r <= H && A[r] > A[largest]) largest = r;

  if (largest != i) {
    swap(A[i], A[largest]);
    maxHeapify(largest);
  }
}

void buildMaxHeap() {
  rep1R(i, H / 2) maxHeapify(i);
}

void heapIncreaseKey(int i, int key) {
  if (key < A[i]) cout << "エラー" << endl;
  A[i] = key;
  while (i > 1 && A[parent(i)] < A[i]) {
    swap(A[i], A[parent(i)]);
    i = parent(i);
  }
}

void insert(int key) {
  ++H;
  A[H] = INT_MIN;
  heapIncreaseKey(H, key);
}

int heapExtractMax() {
  if (H < 1) cout << "エラー" << endl;
  int max = A[1];
  A[1] = A[H];
  --H;
  maxHeapify(1);

  return max;
}

int main() {
  while (true) {
    string com;
    cin >> com;
    if (com == "insert") {
      int key;
      cin >> key;
      insert(key);
    } else if (com == "extract") {
      cout << heapExtractMax() << endl;
    } else if (com == "end") {
      break;
    } else {
      cout << "error" << endl;
    }
  }
  return 0;
}

