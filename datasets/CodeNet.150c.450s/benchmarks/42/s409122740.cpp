#ifdef LOCAL_BUILD
#include "pch.h"
#define DLOG(msg) cout << "#" << __LINE__ << ":" << msg << endl;
#else
#include <bits/stdc++.h>
#define DLOG(msg)
#endif
using namespace std;

template <typename T = int, int Size = 100000>
struct Queue {
  Queue() : in_buf_(new T[Size]), out_buf_(new T[Size]) {}

  T pop() {
    if (out_index_ == out_limit_) {
      out_buf_.swap(in_buf_);
      out_limit_ =  in_index_;
      in_index_ = 0;
      out_index_ = 0;
    }
    return out_buf_[out_index_++];
  }

  void put(T t) { in_buf_[in_index_++] = t; }

  bool empty() const {
    return !in_index_ && (out_index_ == out_limit_);
  }

 private:
  size_t in_index_ = 0;
  size_t out_limit_ = 0;
  size_t out_index_ = 0;
  unique_ptr<T[]> in_buf_;
  unique_ptr<T[]> out_buf_;
};

struct Process {
  string name;
  int time;
};

int main() {
  int n, q;
  cin >> n >> q;
  Queue<Process, 100000> Q;
  for (int i = 0; i < n; ++i) {
    Process proc;
    cin >> proc.name >> proc.time;
    Q.put(move(proc));
  }
  uint64_t elapsed = 0ULL;
  while (!Q.empty()) {
    auto proc = Q.pop();
    if (proc.time <= q) {
      elapsed += proc.time;
      cout << proc.name << " " << elapsed << endl;
    } else {
      elapsed += q;
      proc.time -= q;
      Q.put(proc);
    }
  }
}