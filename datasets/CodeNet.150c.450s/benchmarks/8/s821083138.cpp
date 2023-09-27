#include <iostream>
#include <string>

using namespace std;

int main() {
  int i, n, one, two;
  string p1, p2;

  cin >> n;
  one = 0; two = 0;

  for (i=0; i < n; i++) {
    cin >> p1 >> p2;

    if (p1 == p2) {
      one += 1;
      two += 1;
    }
    else if (p1 > p2) {
      one += 3;
    }
    else if (p1 < p2) {
      two += 3;
    }
  }

  cout << one << " " << two << endl;
  return 0;
}