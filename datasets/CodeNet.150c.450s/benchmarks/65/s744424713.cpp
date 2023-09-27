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

struct Card {
  char type;
  int value;
  Card(char a, int b) : type(a), value(b) {}
  bool operator==(const Card& c) const {
    return c.type == type && c.value == value;
  }
};

ostream& operator<<(ostream& os, const Card& c) {
    os << c.type << c.value;
    return os;
}

vector<Card> bubbleSort(const vector<Card>& a, const int& n) {
  vector<Card> ret = a;
  bool flag = true;
  int count = 0;
  while (flag) {
    flag = false;
    for (int j = n-1; j > 0; j--) {
      if (ret[j].value < ret[j-1].value) {
        swap(ret[j], ret[j-1]);
        count++;
        flag = true;
      }
    }
  }
  return ret;
}

vector<Card> selectionSort(const vector<Card>& a, const int& n) {
  vector<Card> ret = a;
  int count = 0;
  int ms;
  for (int i = 0; i < n; i++) {
    ms = i;
    for (int j = i; j < n; j++) {
      if (ret[j].value < ret[ms].value) {
        ms = j;
      }
    }
    swap(ret[i], ret[ms]);
    if (ret[i].value != ret[ms].value) {
      count++;
    }
  }
  return ret;
}

int main(int ac, char **av) {
  int n;
  while (cin >> n, n) {
    vector<Card> a;
    for (int i = 0; i < n; i++) {
      char type;
      int x;
      cin >> type >> x;
      a.push_back(Card(type, x));
    }
    auto ret_b = bubbleSort(a, n);
    auto ret_s = selectionSort(a, n);
    print_vec(ret_b);
    cout << "Stable" << endl;
    print_vec(ret_s);
    if (ret_b.size() == ret_s.size() && ret_b == ret_s) {
      cout << "Stable" << endl;
    } else {
      cout << "Not stable" << endl;
    }
    n = 0;
  }
  return 0;
}