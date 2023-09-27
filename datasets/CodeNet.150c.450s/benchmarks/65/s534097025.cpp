#ifdef LOCAL_BUILD
#include "pch.h"
#define DLOG(msg) cout << "#" << __LINE__ << ":" << msg << endl;
#else
#include <bits/stdc++.h>
#define DLOG(msg)
#endif
using namespace std;

struct Card {
  Card(const string& s) : symbol(s[0]), value(s[1] - '0') {}
  char symbol;
  uint8_t value;
};

ostream& operator<<(ostream& s, const Card& card) {
  return s << card.symbol << static_cast<int>(card.value);
}

bool operator==(const Card& rhs, const Card& lhs) {
  return rhs.value == lhs.value && rhs.symbol == lhs.symbol;
}

namespace std {
template <>
struct less<Card> {
  bool operator()(const Card& lhs, const Card& rhs) {
    return lhs.value < rhs.value;
  }
};

template <>
struct greater<Card> {
  bool operator()(const Card& lhs, const Card& rhs) {
    return lhs.value > rhs.value;
  }
};
}

template <typename T>
void Print(T t) {
  for (auto it = t.begin(); it != t.end(); ++it) {
    cout << *it;
    if (next(it) != t.end()) {
      cout << " ";
    }
  }
  cout << endl;
}

template <typename T>
T BubbleSort(T t) {
  auto cmp = greater<typename T::value_type>();
  for (auto it = t.begin(); it != t.end(); ++it) {
    for (auto it2 = prev(t.end()); distance(it, it2) > 0; --it2) {
      auto prev_ = prev(it2);
      if (cmp(*prev_, *it2)) {
        iter_swap(prev_, it2);
      }
    }
  }
  return move(t);
}

template <typename T>
T SelectionSort(T t) {
  for (auto it = t.begin(); distance(it, t.end()) != 1; ++it) {
    iter_swap(it, min_element(it, t.end(), less<typename T::value_type>()));
  }
  return move(t);
}

bool IsStable(const vector<Card>& cards, const vector<Card>& sorted) {
  for (auto it = sorted.begin() + 1; it != sorted.end(); ++it) {
    auto prev_ = prev(it);
    if (it->value == prev_->value &&
        0 > distance(find(cards.begin(), cards.end(), *prev_),
                     find(cards.begin(), cards.end(), *it))) {
      return false;
    }
  }
  return true;
}

int main() {
  int n;
  cin >> n;
  vector<Card> cards;
  string buf;
  for (int i = 0; i < n; ++i) {
    cin >> buf;
    cards.emplace_back(buf);
  }
  auto bub = BubbleSort(cards);
  auto bub_stable = IsStable(cards, bub);
  Print(bub);
  cout << (bub_stable ? "Stable" : "Not stable") << endl;
  auto sel = SelectionSort(cards);
  auto sel_stable = IsStable(cards, sel);
  Print(sel);
  cout << (sel_stable ? "Stable" : "Not stable") << endl;
}