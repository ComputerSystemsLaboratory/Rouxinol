// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0500

#include <iostream>
using namespace std;

int main() {
  int n;
  while (cin >> n && n) {
    int A = 0;
    int B = 0;
    for (auto i=0; i<n; i++) {
      int a, b;
      cin >> a >> b;
      if (a > b) {
	A = A+a+b;
      } else if (a < b) {
	B = B+a+b;
      } else {
	A += a;
	B += b;
      }
    }
    cout << A << " " << B << endl;
  }
}