#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  string s, t;
  int a, b, l;
  vector<int> A, v;
  bool f;
  while (cin >> a >> l, l) {
    A.erase(A.begin(), A.end());
    A.push_back(a);
    f = false;
    for (int i = 0; i < 20; ++i) {
      if (f) break;
      for (int j = 0; j < l; ++j) {
	v.push_back(a%10);
	a /= 10;
      }
      sort(v.begin(), v.end());
      for (int j = 0; j < l; ++j) {
	a *= 10;
	a += v[l-1-j] - v[j];
      }
      v.erase(v.begin(), v.end());
      for (int j = 0; j < i+1; ++j) {
	if (a == A[j]) {
	  cout << j << " " << a << " " << i-j+1 << endl;
	  f = true;
	  break;
	}
      }
      A.push_back(a);
    }
  }
  return 0;
}