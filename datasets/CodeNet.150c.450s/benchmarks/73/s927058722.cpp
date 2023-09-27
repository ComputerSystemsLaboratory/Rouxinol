#include<algorithm>
#include<climits>
#include<functional>
#include<vector>
template<typename T = int, T  LOWEST = INT_MAX, typename F = std::function<T(T, T)>>
class SegmentTree {
public:
  explicit SegmentTree(int n, const F& op = (const int&(*)(const int&, const int&))std::min) : NIL(-1) {initialize(n, op);}
  explicit SegmentTree(const std::vector<T>& list, const F& op = (const int&(*)(const int&, const int&))std::min) : NIL(-1) {
    initialize(list.size(), op);
    for(int i = 0; i < list.size(); ++i) update(i, list.at(i));
  }
  const T find(int left, int right) const {return query(left, right + 1, 0, 0, size_);}
  void update(int index, const T& value) {
    int i = index + size_ - 1;
    node_.at(i) = value;
    while((i = parent(i)) != NIL) node_.at(i) = op_(node_.at(left_child(i)), node_.at(right_child(i)));
  }
private:
  void initialize(int n, const F& op) {
    op_ = op;
    size_ = 1;
    while(size_ < n) size_ <<= 1;
    node_.assign((size_ << 1) - 1, LOWEST);
  }
  int parent(int node) const {return node == 0 ? NIL : (node - 1) >> 1;}
  int left_child(int node) const {return (node << 1) + 1;}
  int right_child(int node) const {return (node << 1) + 2;}
  const T query(int a, int b, int k, int l, int r) const {
    if(b <= l || r <= a) return  LOWEST;
    if(a <= l && r <= b) return node_.at(k);
    auto vl = query(a, b, left_child(k), l, (l + r) / 2);
    auto vr = query(a, b, right_child(k), (l + r) / 2, r);
    return op_(vl, vr);
  }
  const int NIL;
  int size_;
  std::vector<T> node_;
  F op_;
};

#include<iostream>
using namespace std;
int main() {
  int n, q;
  cin >> n >> q;
  SegmentTree<int, 0> RSQ(n, plus<int>());
  for(int i = 0; i < q; ++i) {
    int com, x, y;
    cin >> com >> x >> y;
    if(com) cout << RSQ.find(x-1, y-1) << endl;
    else    RSQ.update(x-1, RSQ.find(x-1,x-1)+y);
  }
}