// -*- mode:c++; coding:utf-8; c-basic-offset:2; -*-
// ALDS1_9_B: Maximum Heap

#include <algorithm>
#include <cstdio>

class MaxHeap {
  int n_;
  int* data_;

public:
  MaxHeap(unsigned int n) : n_(n), data_(new int[n]) { }

  ~MaxHeap() { delete[] data_; }

  int& operator[](unsigned int i) { return data_[i]; }

  void build()
  {
    for (auto i = (n_/2)-1; i >= 0; --i) {
      max_heapify(i);
    }
  }

  void print() const
  {
    for (auto i = 0; i < n_; ++i) {
      std::printf(" %d", data_[i]);
    }
    std::printf("\n");
  }
  
private:
  void max_heapify(int i)
  {
    while (i < n_/2) {
      auto c = 2*i + 1; // left
      if (c+1 < n_ && data_[c] < data_[c+1]) {
        ++c; // right
      }
      if (data_[c] < data_[i]) {
        return;
      }
      std::swap(data_[c], data_[i]);
      i = c;
    }
  }
};

int main()
{
  int h;
  std::scanf("%d", &h);
  MaxHeap mh(h);
  for (auto i = 0; i < h; ++i) {
    std::scanf("%d", &mh[i]);
  }
  mh.build();
  mh.print();
}

// eof