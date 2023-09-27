#include <iostream>
using namespace std;
int main() {
  int n;
  while (cin >> n) {
    int d = n;
    long long s = 0;
    while (d < 600) {
      s += n * d * d;
      d += n;
    }
    cout << s << endl;
  }
}