#ifdef LOCAL_BUILD
#include "pch.h"
#define DLOG(msg) cout << "#" << __LINE__ << ":" << msg << endl;
#else
#include <bits/stdc++.h>
#define DLOG(msg)
#endif
using namespace std;

void printHead(vector<int>& heap) {
  for (size_t i = 0; i < heap.size(); ++i) {
    auto h_index = i + 1;
    cout << "node " << h_index << ": key = " << heap[h_index - 1] << ", ";
    if (i != 0) {
      cout << "parent key = " << heap[h_index / 2 - 1] << ", ";
    }
    if (h_index * 2 < heap.size() + 1) {
      cout << "left key = " << heap[h_index * 2 - 1] << ", ";
    }
    if (h_index * 2 + 1 < heap.size() + 1) {
      cout << "right key = " << heap[h_index * 2] << ", ";
    }
    cout << endl;
  }
}

int main() {
  int H;
  cin >> H;
  vector<int> heap;
  for (int t, i = 0; i < H; ++i) {
    cin >> t;
    heap.push_back(t);
  }
  printHead(heap);
}