#include<vector>
#include<climits>
#include<cmath>
template<typename T>
class LazyPropagationSegmentTree {
public:
  LazyPropagationSegmentTree(int n) : size_(1) {
    while(size_ < n) size_ <<= 1;
    node_.assign(size_ << 1, 0);
    lazy_.assign(size_ << 1, 0);
  }
  T find(int left, int right) {return query(left, right + 1, 1, 0, size_);}
  void add(int left, int right, T value) {propagate(left, right + 1, value, 1, 0, size_);}
private:
  int left_child(int node) const {return node << 1;}
  int right_child(int node) const {return (node << 1) + 1;}
  T query(int a, int b, int k, int l, int r) {
    if(b <= l || r <= a) return 0;
    if(a <= l && r <= b) return node_.at(k) + (r - l) * lazy_.at(k);
    lazy_.at(left_child(k)) += lazy_.at(k);
    lazy_.at(right_child(k)) += lazy_.at(k);
    lazy_.at(k) = 0;
    auto vl = query(a, b, left_child(k), l, (l + r) / 2);
    auto vr = query(a, b, right_child(k), (l + r) / 2, r);
    return vl + vr;
  }
  T propagate(int a, int b, T value, int k, int l, int r) {
    if(b <= l || r <= a) return node_.at(k) + (r - l) * lazy_.at(k);
    if(a <= l && r <= b) return node_.at(k) + (r - l) * (lazy_.at(k) += value);
    lazy_.at(left_child(k)) += lazy_.at(k);
    lazy_.at(right_child(k)) += lazy_.at(k);
    lazy_.at(k) = 0;
    auto vl = propagate(a, b, value, left_child(k), l, (l + r) / 2);
    auto vr = propagate(a, b, value, right_child(k), (l + r) / 2, r);
    return node_.at(k) = vl + vr;
  }
  int size_;
  std::vector<T> node_;
  std::vector<T> lazy_;
};

#include<iostream>
using namespace std;
int main() {
  int n, q;
  cin >> n >> q;
  LazyPropagationSegmentTree<int> RSQ(n);
  for(int i = 0; i < q; ++i) {
    int com, x, y;
    cin >> com >> x >> y;
    if(com) cout << RSQ.find(x-1, y-1) << endl;
    else    RSQ.add(x-1, x-1, y);
  }
}