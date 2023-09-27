#include <iostream>
#include <tuple>
#include <set>
using namespace std;

typedef tuple<int, int> seq; // tail, length
const int infty = 1e9+10;

int main () {
  int n;
  cin >> n;
  int a[100010];
  for (auto i=0; i<n; i++) {
    cin >> a[i];
  }
  set<seq> S;
  S.insert(make_tuple(infty, 100010));
  S.insert(make_tuple(-1, 0));
  for (auto i=0; i<n; i++) {
    auto it = S.lower_bound(make_tuple(a[i], -1));
    it--;
    seq temp = *it;
    get<0>(temp) = a[i];
    int tl = ++get<1>(temp);
    S.insert(temp);
    // cerr << "insert: " << get<0>(temp) << " " << get<1>(temp) << endl;
    it++; it++;
    while (it != S.end() && get<1>(*it) <= tl) {
      // cerr << "erase: " << get<0>(*it) << " " << get<1>(*it) << endl;
      S.erase(it++);
    }
  }
  auto it = S.end();
  it--; it--;
  cout << get<1>(*it) << endl;
}