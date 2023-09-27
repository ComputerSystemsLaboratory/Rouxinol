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
  int a, b, c;
  cin >> a >> b >> c;

  if(a > b)
    swap(a, b);
  if(a > c)
    swap(a, c);
  if(b > c)
    swap(b, c);

  cout << a << " " << b << " " << c << endl;
  return 0;
}