#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
//#define shosu(n) setprecision(n)
//#define ENDL endl
using namespace std;
int main() {
  int A, B;
  char s;
  while (cin >> A >> s >> B) {
    if (s == '?')
      break;
    if (s == '+')
      cout << A + B << endl;
    if (s == '-')
      cout << A - B << endl;
    if (s == '*')
      cout << A * B << endl;
    if (s == '/')
      cout << A / B << endl;
  }
  return 0;
}