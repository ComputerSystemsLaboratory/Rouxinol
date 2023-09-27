#include <iostream>
using namespace std;

int main (int argc, char **argv) {
  int a, b, c;
  cin >> a >> b >> c;

  int cnt = 0; // counter
  int x = a;
  while (x <= b) {
    if (c % x == 0) cnt++;
    x++;
  }
  cout << cnt << endl;
}