#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

class MaxHeap
{
public:

  MaxHeap() : size_(0)
  {
    heap_ = vector<int>(1000);
  }

  MaxHeap(vector<int> v) : heap_(v), size_(v.size())
  {
    buildHeap();
  }

  void insert(int key)
  {
    if (size_ == (int)heap_.size()) {
      heap_.resize(heap_.size() * 2);
    }
    heap_[size_] = key;
    ++size_;
    int ix = size_ - 1, pix = -1;
    while (ix > 0) {
      pix = (ix - 1) / 2;
      if (heap_[pix] >= heap_[ix]) { break; }
      swap(heap_[ix], heap_[pix]);
      ix = pix;
    }
  }

  int extractMax()
  {
    int ret = heap_[0];
    heap_[0] = heap_[size_ - 1];
    --size_;
    maxHeapify(0);
    return ret;
  }

  int size() { return size_; }
  bool empty() { return size_ == 0; }

  void buildHeap()
  {
    for (int i = (size_ - 1) / 2; i >= 0; --i) {
      maxHeapify(i);
    }
  }

  void maxHeapify(int ix)
  {
    if (ix >= size_) { return; }
    int l = 2 * ix + 1, r = 2 * ix + 2;
    int largest = ix;
    if (l < size_ && heap_[l] > heap_[largest]) { largest = l; }
    if (r < size_ && heap_[r] > heap_[largest]) { largest = r; }
    if (ix != largest) {
      swap(heap_[ix], heap_[largest]);
      maxHeapify(largest);
    }
  }

  void print()
  {
    for (int i = 0; i < size_; ++i) {
      fprintf(stdout, " %d", heap_[i]);
    }
    fprintf(stdout, "\n");
  }

private:
  vector<int> heap_;
  int size_;
};

int main()
{
  MaxHeap h;
  char buf[128] = { '\0' };
  int key = -1;
  while (true) {
    fscanf(stdin, "%s", buf);
    if (buf[0] == 'i') {
      fscanf(stdin, "%d", &key);
      h.insert(key);
    }
    else if (buf[0] == 'e' && buf[1] == 'x') {
      if (h.empty()) { continue; }
      int val = h.extractMax();
      fprintf(stdout, "%d\n", val);
    }
    else if (buf[0] == 'e' && buf[1] == 'n') {
      break;
    }
  }
  return 0;
}