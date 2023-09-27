#include <iostream>
#include <algorithm>
#include <vector>

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

vector<int> insertionSort(const vector<int>& a, const int& n) {
  vector<int> ret = a;
  for (int i = 0; i < n; i++) {
    auto v = ret[i];
    auto j = i - 1;
    while (j >= 0 && ret[j] > v) {
      ret[j+1] = ret[j];
      j--;
    }
    ret[j+1] = v;
    print_vec(ret);
  }
  return ret;
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
    insertionSort(a, n);
    // print_vec(b);
    n = 0;
  }
  return 0;
}