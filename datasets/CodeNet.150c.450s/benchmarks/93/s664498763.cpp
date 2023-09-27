#ifdef LOCAL_BUILD
#include "pch.h"
#define DLOG(msg) cout << "#" << __LINE__ << ":" << msg << endl;
#define DLOG_V(var)\
  cout << "#" << __LINE__ << ":" << #var << " : " << var << endl;
#else
#include <bits/stdc++.h>
#define DLOG(msg)
#define DLOG_V(var)
#endif
using namespace std;

template <typename Iter, typename Cmp>
Iter partition(Iter begin, Iter end, Iter pivot, Cmp cmp) {
  if (distance(pivot, end) != 1) {
    iter_swap(end -1, pivot);
    pivot = end - 1;
  }
  auto x = end;
  for (auto it = begin; it != end; ++it) {
    if (it != pivot && cmp(*it, *pivot)) {
      x = (x == end) ? begin : x + 1;
      if (x != it) {
        iter_swap(x, it);
      }
    }
  }
  x = (x == end) ? begin : x + 1;
  iter_swap(x, pivot);
  return x;
}

template <typename Iter, typename Cmp>
void quickSort(Iter begin, Iter end, Cmp cmp) {
  auto p = partition(begin, end, end - 1, cmp);
  if (p != begin) {
    quickSort(begin, p, cmp);
    quickSort(p, end, cmp);
  }
}

struct Card {
  char kind;
  int value;
  size_t orig_index;
};

bool isStable(vector<Card>& before, vector<Card>& after) {
  int val = numeric_limits<int>::max();
  auto start = after.begin();
  for (auto it = next(after.begin()); it != after.end(); ++it) {
    auto p = prev(it);
    if (it->value == p->value && it->orig_index < p->orig_index) {
      return false;
    }
  }
  return true;
}

int main() {
  int n;
  cin >> n;
  vector<Card> cards;
  auto cmp = [](const Card& c1, const Card& c2) {
    return c1.value <= c2.value;
  };
  for (int i = 0; i < n ; ++i) {
    Card c;
    cin >> c.kind >> c.value;
    c.orig_index = i;
    cards.push_back(move(c));
  }
  auto orig = cards;
  quickSort(cards.begin(), cards.end(), cmp);
  auto is_stable = isStable(orig, cards);
  cout << (is_stable ? "Stable" : "Not stable") << endl;
  for (auto it = cards.begin(); it != cards.end(); ++it) {
    cout << it->kind << " " << it->value << endl;
  }
}