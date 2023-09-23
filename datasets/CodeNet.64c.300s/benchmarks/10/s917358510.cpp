#include<cstdio>
#include<iostream>
using namespace std;

int main() {
  int a, b, t;

  while (true) {
    cin >> a >> b;
    if (a == 0 && b == 0) break;
    if (a > b) t = a, a = b, b = t;
    cout << a << " " << b << "\n";
  }
  cout << flush;

  return 0;
}
  