#include <bits/stdc++.h>

using namespace std;
#define MAX 500001

int H, A[MAX];

int _left(int node) {
  return node * 2;
}
int _right(int node) {
  return node * 2 + 1;
}

void maxHeapify(int A[], int node) {
  int left, right, largest;
  left = _left(node);
  right = _right(node);

  if (left <= H && A[left] > A[node]) {
    largest = left;
  } else {
    largest = node;
  }
  if (right <= H && A[right] > A[largest]) {
    largest = right;
  }
  if (largest != node) {
    swap(A[node], A[largest]);
    maxHeapify(A, largest);
  }
}

void buildMaxHeap(int A[]) {
  for (int i = H / 2; i >= 1; i--) {
    maxHeapify(A, i);
  }
}

int main() {
  cin >> H;
  for (int i = 1; i <= H; i++) {
    cin >> A[i];
  }
  buildMaxHeap(A);
  for (int i = 1; i <= H; i++) {
    cout << " " << A[i];
  }
  cout << endl;

  return 0;
}

