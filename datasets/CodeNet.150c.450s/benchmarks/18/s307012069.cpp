// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0007&lang=jp

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  long long x = 100000;
  for (auto i=0; i<n; i++) {
    x *= 1.05;
    if (x%1000 != 0) {
      x = (x/1000 + 1) * 1000;
    }
  }
  cout << x << endl;
}