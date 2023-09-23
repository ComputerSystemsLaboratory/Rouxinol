#include <iostream>
using namespace std;

inline void swap(int &a, int &b) { int t = a; a = b; b = t; }

int main()
{
  int n;
  int a, b, c;

  cin >> n;
  for (int i = 0; i<n; i++)
  {
    cin >> a >> b >> c;
    if (c < a) swap(c, a);
    if (c < b) swap(c, b);
    if (c*c == a*a + b*b) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
  return 0;
}