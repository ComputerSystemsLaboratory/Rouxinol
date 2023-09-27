#include <iostream>
#include <algorithm>
#include <vector>
#include <tuple>

using namespace std;

template <class T>
void print_vec(const vector<T>& v) {
  for (auto t = begin(v); t != end(v);) {
    cout << *t;
    if (++t != end(v)) {
      cout << " ";
    }
  }
  cout << endl;
}

tuple<vector<int>, int> selectionSort(const vector<int>& a, const int& n) {
  vector<int> ret = a;
  int count = 0;
  int ms;
  for (int i = 0; i < n; i++) {
    ms = i;
    for (int j = i; j < n; j++) {
      if (ret[j] < ret[ms]) {
        ms = j;
      }
    }
    swap(ret[i], ret[ms]);
    if (ret[i] != ret[ms]) {
      count++;
    }
  }
  return make_tuple(ret, count);
}

int main(int ac, char **av) {
  int n;
  while (cin >> n, n) {
    vector<int> a;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      a.push_back(x);
    }
    auto ret = selectionSort(a, n);
    print_vec(get<0>(ret));
    cout << get<1>(ret) << endl;
    n = 0;
  }
  return 0;
}