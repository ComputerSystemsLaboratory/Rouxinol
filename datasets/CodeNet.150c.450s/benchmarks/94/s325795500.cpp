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

tuple<vector<int>, int> bubbleSort(const vector<int>& a, const int& n) {
  vector<int> ret = a;
  bool flag = true;
  int count = 0;
  while (flag) {
    flag = false;
    for (int j = n-1; j > 0; j--) {
      if (ret[j] < ret[j-1]) {
        swap(ret[j], ret[j-1]);
        count++;
        flag = true;
      }
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
    auto ret = bubbleSort(a, n);
    print_vec(get<0>(ret));
    cout << get<1>(ret) << endl;
    n = 0;
  }
  return 0;
}