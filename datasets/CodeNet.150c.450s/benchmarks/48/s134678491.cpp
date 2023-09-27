#include <iostream>
using namespace std;
int main() {
  int e, m;
  while (cin >> e, e) {
    m = e;
    for (int i = 0; i*i <= e; ++i) {
      for (int j = 0; j*j*j + i*i <= e; ++j) {
	m = min(m, e + i + j - i*i - j*j*j);
      }
    }
    cout << m << endl;
  }
  return 0;
}