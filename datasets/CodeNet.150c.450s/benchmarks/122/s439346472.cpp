// -*- mode:c++; coding:utf-8; c-basic-offset:2; -*-
// ALDS1_9_C: Priority Queue

#include <algorithm>
#include <cstdio>
#include <vector>

class PriorityQueue {
  std::vector<int> v_;

public:
  void insert(int i)
  {
    v_.push_back(i);
    upto(v_.size()-1);
  }

  int extract_max()
  {
    const auto max = v_.front();
    v_[0] = v_.back();
    v_.pop_back();
    downto(0);
    return max;
  }
  
private:
  void upto(int k)
  {
    while (k > 0) {
      auto p = (k-1)/2;
      if (v_[p] > v_[k]) {
        break;
      }
      std::swap(v_[p], v_[k]);
      k = p;
    }
  }

  void downto(int k)
  {
    const auto n = static_cast<int>(v_.size());
    while (k < n/2) {
      auto c = 2*k + 1; // left
      if (c+1 < n && v_[c] < v_[c+1]) {
        ++c; // right
      }
      if (v_[c] < v_[k]) {
        break;
      }
      std::swap(v_[k], v_[c]);
      k = c;
    }
  }
};

int main()
{
  PriorityQueue pq;
  char buf[7+1]; // "extract".size() + 1('\0')
  int k;
  while (true) {
    std::scanf("%7s", buf);
    if (buf[0] == 'i') { // insert k
      std::scanf("%d", &k);
      pq.insert(k);
    } else if (buf[1] == 'x') { // extract
      auto max = pq.extract_max();
      std::printf("%d\n", max);
    } else { // end
      break;
    }
  }
}

// eof