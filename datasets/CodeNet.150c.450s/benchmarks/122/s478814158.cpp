#ifdef LOCAL_BUILD
#include "pch.h"
#define DLOG(msg) cout << "#" << __LINE__ << ":" << msg << endl;
#define DLOG_V(var) \
  cout << "#" << __LINE__ << ":" << #var << " : " << var << endl;
#else
#include <bits/stdc++.h>
#define DLOG(msg)
#define DLOG_V(var)
#endif
using namespace std;

struct Heap {
  Heap() : buf_(1, 0) {}

  void insert(int v) {
    buf_.push_back(v);
    DLOG_V(buf_.size());
    bool modified = true;
    for (auto i = (buf_.size() - 1) / 2; modified && i >= 1; i /= 2) {
      modified = false;
      heapify(i, modified);
    }
  }

  int extractMax() {
    if (buf_.size() < 2) {
      throw std::logic_error("heap is empty");
    }
    auto v = buf_[1];
    swap(buf_[1], buf_.back());
    buf_.resize(buf_.size() - 1);
    bool modified = false;
    heapify(1, modified);
    return v;
  }

 private:
  void heapify(size_t i, bool& modified) {
    auto l = i * 2;
    auto r = i * 2 + 1;
    auto max_ = i;
    if (l < buf_.size() && buf_[l] > buf_[max_])
      max_ = l;
    if (r < buf_.size() && buf_[r] > buf_[max_])
      max_ = r;
    if (max_ == i) {
      return;
    }
    modified = true;
    swap(buf_[max_], buf_[i]);
    return heapify(max_, modified);
  }

  vector<int> buf_;
};

int main() {
  Heap heap;
  string buf;
  int v;
  for (;;) {
    cin >> buf;
    if (!buf.compare("end")) {
      break;
    } else if (!buf.compare("insert")) {
      cin >> v;
      heap.insert(v);
    } else if (!buf.compare("extract")) {
      cout << heap.extractMax() << endl;
    }
  }
}