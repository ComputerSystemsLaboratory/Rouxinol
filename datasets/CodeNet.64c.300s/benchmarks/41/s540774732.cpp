#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int const MAX = 500003;
int heap[MAX];
int h;

int parent(int i) {
  return i / 2;
}
int left(int i) {
  return 2 * i;
}
int right(int i) {
  return 2*i + 1;
}

void maxHeapify(int i) {
  int l = left(i);
  int r = right(i);
  int largest;
  if (l <= h && heap[l] > heap[i]) largest = l;
  else largest = i;
  if (r <= h && heap[r] > heap[largest]) largest = r;

  if (largest != i) {
    int tmp = heap[i];
    heap[i] = heap[largest];
    heap[largest] = tmp;
    maxHeapify(largest);
  }
}

void buildMaxHeap() {
  for (int i=h/2; i>=1; i--) {
    maxHeapify(i);
  }
}

int main() {
  cin >> h;
  rep(i,h) cin >> heap[i+1];

  buildMaxHeap();

  rep(i,h) cout << ' ' << heap[i+1];
  cout << endl;
  
  return 0;
}

