#include <iostream>

using namespace std;

int main() {
  int count = 0;
  int a, b, c;
  cin >> a >> b >> c;

  for (int i = a; i <= b; i++) {
    if (int(c / i) * i == c)
      count++;
  }
  cout << count << endl;
  return 0;
}

