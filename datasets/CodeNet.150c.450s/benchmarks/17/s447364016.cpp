#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
  int a, b, c, d, e;
  vector<int> v;
  scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
  v.push_back(a);
  v.push_back(b);
  v.push_back(c);
  v.push_back(d);
  v.push_back(e);
  sort(v.begin(), v.end(), greater<int>());
  for (int i = 0; i < v.size(); ++i) {
    cout << v[i];
    if (i < v.size() - 1) {
      cout << " ";
    }
  }
  cout << endl;
  return 0;
}