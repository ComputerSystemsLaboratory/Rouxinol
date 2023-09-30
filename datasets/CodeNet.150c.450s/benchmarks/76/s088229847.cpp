// 20:45
#include <bits/stdc++.h>

#ifdef _DEBUG
#define ASSERT(x) assert(x)
#define DLOG(x) cout << __LINE__ << ": " << x << endl;
#else
#define ASSERT(x)
#define DLOG(x)
#endif
#define DLOG_V(x) DLOG(#x << ": " << x)

using namespace std;

constexpr static auto none{numeric_limits<int>::min()};

struct Tree {
  void print(ostream& os) const {
    doInOrder(rootIdx, [&os](auto&& i) { os << " " << i; });
    os << endl;
    doPreOrder(rootIdx, [&os](auto&& i) { os << " " << i; });
    os << endl;
  }

  void insert(int val) {
    size_t idx = rootIdx;
    while (true) {
      auto cur = tryGet(idx);
      if (cur == none) {
        vals_[idx] = val;
        return;
      } else {
        idx = val < cur ? leftIdx(idx) : rightIdx(idx);
      }
    }
  }

  bool find(int val) {
    size_t cur = rootIdx;
    for (;;) {
      auto it = vals_.find(cur);
      if (it == vals_.end()) {
        return false;
      }
      auto v0 = it->second;
      if (v0 == val) {
        return true;
      } else if (val < v0) {
        cur = leftIdx(cur);
      } else {
        cur = rightIdx(cur);
      }
    }
    return false;
  }

 private:
  constexpr static size_t rootIdx = 1;

  static size_t leftIdx(size_t idx) { return idx * 2; }
  static size_t rightIdx(size_t idx) { return idx * 2 + 1; }

  int tryGet(size_t idx) const {
    auto it = vals_.find(idx);
    if (it == vals_.end()) {
      return none;
    } else {
      return it->second;
    }
  }

  void doInOrder(size_t idx, const function<void(int)>& f) const {
    if (tryGet(idx) == none) {
      return;
    }
    doInOrder(leftIdx(idx), f);
    f(tryGet(idx));
    doInOrder(rightIdx(idx), f);
  }

  void doPreOrder(size_t idx, const function<void(int)>& f) const {
    if (tryGet(idx) == none) {
      return;
    }
    f(tryGet(idx));
    doPreOrder(leftIdx(idx), f);
    doPreOrder(rightIdx(idx), f);
  }

  unordered_map<size_t, int> vals_;
};

int main() {
  int num;
  cin >> num;
  Tree tree;
  ostringstream ss;
  for (int i = 0; i < num; ++i) {
    string cmd;
    cin >> cmd;
    if (cmd == "insert") {
      int val;
      cin >> val;
      tree.insert(val);
    } else if (cmd == "find") {
      int val;
      cin >> val;
      ss << (tree.find(val) ? "yes" : "no") << endl;
    } else if (cmd == "print") {
      tree.print(ss);
    }
  }
  cout << ss.str();
}
