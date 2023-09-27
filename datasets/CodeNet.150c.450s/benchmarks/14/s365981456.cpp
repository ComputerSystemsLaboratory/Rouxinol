#include <iostream>
using namespace std;

bool isMatch(int x) {
  if (x % 3 == 0) return true;

  do {
    if (x % 10 == 3) return true;
  } while (x /= 10);

  return false;
}

int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    if (isMatch(i)) cout << ' ' << i;
  }
  cout << endl;
  return 0;
}


