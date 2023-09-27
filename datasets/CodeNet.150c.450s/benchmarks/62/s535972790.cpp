#include <iostream>

using namespace std;

void swap(int *a, int *b)
{
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

int main(void)
{
  int a = 0, b = 0, c = 0;
  cin >> a >> b >> c;

  if (a > b) {
    swap(&a, &b);
  }

  if (b > c) {
    swap(&b, &c);
  }

  if (a > b) {
    swap(&a, &b);
  }

  cout << a << " " << b << " " << c << endl;

  return 0;
}