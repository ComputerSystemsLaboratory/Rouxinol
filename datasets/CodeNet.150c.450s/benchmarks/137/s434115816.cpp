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

struct Dict {
  Dict() : buf_(initial_buf_size, list<string>()) {}

  void Insert(const string& s) {
    auto h = StrHash(s) % buf_.size();
    auto& slot = buf_[h];
    if (!FindInternal(slot, s)) {
      slot.push_front(s);
    }
  }

  bool Find(const string& s) const {
    auto h = StrHash(s) % buf_.size();
    auto& slot = buf_[h];
    return FindInternal(slot, s);
  }

 private:
  constexpr static auto initial_buf_size = 1024 * 1024;

  bool FindInternal(const list<string>& slot, const string& s) const {
    return find_if(slot.begin(), slot.end(),
                [&](const string& s0) { return !s0.compare(s); }) != slot.end();
  }

  static size_t StrHash(const string& s) {
    size_t hash = 17;
    for (auto&& c : s) {
      hash += (hash * 23) + static_cast<size_t>(c) * 7;
    }
    return hash;
  }

  vector<list<string>> buf_;
};

int main() {
  int n;
  cin >> n;
  Dict dic;
  for (int i = 0; i < n; ++i) {
    string cmd;
    string str;
    cin >> cmd >> str;
    if (!cmd.compare("insert")) {
      dic.Insert(str);
    } else {
      cout << (dic.Find(str) ? "yes" : "no") << endl;
    }
  }
}