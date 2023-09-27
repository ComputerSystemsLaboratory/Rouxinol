#include <iostream>
using namespace std;

inline void swap(int *a, int *b){ int t = *a; *a = *b; *b = t; }

int main()
{
  int a, b, c;
  cin >> a >> b >> c;
  int t;
  if (a > b) swap(&a, &b);
  if (b > c) swap(&b, &c);
  if (a > b) swap(&a, &b);
  cout << a << ' ' << b << ' ' << c << endl;
  return 0;
}