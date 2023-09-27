#ifdef LOCAL_BUILD
#include "pch.h"
#define DLOG(msg) cout << "#" << __LINE__ << ":" << msg << endl;
#define DLOG_V(var) cout << "#" << __LINE__ << ":" << #var << " : " << var << endl;
#else
#include <bits/stdc++.h>
#define DLOG(msg)
#define DLOG_V(var)
#endif
using namespace std;

void maxHeapify(vector<int>& heap, size_t i) {
  auto l = i * 2;
  auto r = i * 2 + 1;
  auto v = heap[i];
  auto lv = l < heap.size() ? heap[l] : numeric_limits<int>::lowest();
  auto rv = r < heap.size() ? heap[r] : numeric_limits<int>::lowest();
  if (v >= lv && v >= rv) {
    return;
  }
  auto largest = lv >= rv ? l : r;
  swap(heap[largest], heap[i]);
  maxHeapify(heap, largest);
}

void buildMaxHeap(vector<int>& heap) {
  for (size_t i = (heap.size() - 1) / 2; i >= 1; --i) {
    maxHeapify(heap, i);
  }
}

void printHeap(vector<int>& heap) {
  for (auto it = next(heap.begin()); it != heap.end(); ++it) {
    cout << " " << *it;
  }
  cout << endl;
}

int main() {
  int H;
  cin >> H;
  vector<int> heap;
  heap.push_back(0);
  for (int t, i = 0; i < H; ++i) {
    cin >> t;
    heap.push_back(t);
  }
  buildMaxHeap(heap);
  printHeap(heap);
}