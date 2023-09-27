#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

struct UFNode
{
  int value_;
  int rank_, p_;
  int index_;
  UFNode(int value) : value_(value), rank_(0), p_(-1), index_(-1) {}
};

struct UFSet
{
  vector<UFNode> ufset_;
  void make_set(int value)
  {
    UFNode node(value);
    ufset_.push_back(node);
    ufset_.back().index_ = ufset_.size() - 1;
    ufset_.back().p_ = ufset_.size() - 1;
  }

  // Return index of the root of the tree to which value belongs.
  int find_set(int value, int index = -1)
  {
    int ix = index;
    if (ix == -1) {
      for (int i = 0; i < (int)ufset_.size(); ++i) {
        if (ufset_[i].value_ == value) {
          ix = i;
          break;
        }
      }
    }
    if (ix == -1) {
      fprintf(stderr, "find_set(): node not found!!\n");
      return -1;
    }
    if (ufset_[ix].p_ != ufset_[ix].index_) {
      ufset_[ix].p_ = find_set(ufset_[ufset_[ix].p_].value_, ufset_[ix].p_);
    }
    return ufset_[ix].p_;
  }

  void unite(int x, int y)
  {
    int s1 = find_set(x), s2 = find_set(y);
    if (s1 == s2) { return; }
    if (s1 == -1 || s2 == -1) { return; }
    if (ufset_[s1].rank_ > ufset_[s2].rank_) {
      // connect ufset_[s2] to ufset_[s1]
      ufset_[s2].p_ = s1;
    }
    else {
      // connect ufset_[s1] to ufset_[s2]
      ufset_[s1].p_ = s2;
      if (ufset_[s1].rank_ == ufset_[s2].rank_) {
        ++ufset_[s2].rank_;
      }
    }
  }

  bool is_same(int x, int y)
  {
    return find_set(x) == find_set(y);
  }
};

int main()
{
  int n, q;
  UFSet ufset;
  fscanf(stdin, "%d %d", &n, &q);
  for (int i = 0; i < n; ++i) {
    ufset.make_set(i);
  }
  for (int i = 0; i < q; ++i) {
    int c, x, y;
    fscanf(stdin, "%d %d %d", &c, &x, &y);
    if (c == 0) {
      ufset.unite(x, y);
    }
    else if (c == 1) {
      int ans = ufset.is_same(x, y) ? 1 : 0;
      fprintf(stdout, "%d\n", ans);
    }
  }
  return 0;
}