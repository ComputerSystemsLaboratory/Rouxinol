#include <iostream>
using namespace std;

void swap(int& a, int& b)
{
  int tmp = a;
  a = b;
  b = tmp;
}

int main()
{
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b) swap(a, b);
    if (a > c) swap(a, c);
    if (b > c) swap(b, c);

    if(a * a + b * b == c * c)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}