#include <iostream>
using namespace std;

int main() {
  int h = 0, m = 0, s;
  cin >> s;
  while (s >= 60) {
    s -= 60;
    m++;
  }
  while (m >= 60) {
    m -= 60;
    h++;
  }
  cout << h << ':' << m << ':' << s << endl;
  return 0;
}