#include<iostream>
using namespace std;

int H;

void max_heapify(int A[], int i) {
  int l, r, largest, tmp;
  l = 2 * i;
  r = 2 * i + 1;

  // i, l, r で値が最大のノードを選ぶ
  if (l <= H && A[l] > A[i]) largest = l;
  else largest = i;
  if (r <= H && A[r] > A[largest]) largest = r;

  // 子のほうが大きかった場合
  if (largest != i) {
    tmp = A[i];
    A[i] = A[largest];
    A[largest] = tmp;
    // さらに下層に適用
    max_heapify(A, largest);
  }    
}

void build_max_heap(int A[]) {
  for (int i = H / 2; i > 0; i--) {
    max_heapify(A, i);
  }
}

int main() {
  int i, heap[500001];

  cin >> H;
  for (i = 1; i <= H; i++) cin >> heap[i];

  build_max_heap(heap);

  for (i = 1; i <= H; i++) cout << " " << heap[i];
  cout << endl;
  
  return 0;
}
