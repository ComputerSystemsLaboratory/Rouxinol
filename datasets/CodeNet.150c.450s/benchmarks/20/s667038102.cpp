#include<cstdio>
#include<iostream>
using namespace std;

int main() {
  int h, m, s;

  cin >> h;
  s = h % 60;
  h /= 60;
  m = h % 60;
  h /= 60;

  cout << h << ":" << m << ":" << s << endl;

  return 0;
}
  