#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;

int main()
{
  int cases; cin >> cases;
  while(cases--) {
    int a, b, c; cin >> a >> b >> c;
    if (a*a == b*b + c*c ||
        b*b == c*c + a*a ||
        c*c == a*a + b*b)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}