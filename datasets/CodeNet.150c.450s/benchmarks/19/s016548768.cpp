#include <iostream>
using namespace std;

inline void swap(int *a, int *b){ int t = *a; *a = *b; *b = t; }

int main()
{
  int a, b;
  while (1)
  {
    cin >> a >> b;
    if ((a == 0) && (b == 0)) return 0;
    if (a > b) swap(&a, &b);
    cout << a << ' ' << b << endl;
  }
}