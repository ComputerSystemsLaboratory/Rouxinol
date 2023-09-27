#include <iostream>
using namespace std;

int getDigit(int in)
{
  if (in == 0) return 0;
  int ret = 1;

  while (in /= 10) ret++;

  return ret;
}

int main(void)
{
  int a, b;

  while (cin >> a) {
    cin >> b;

    cout << getDigit(a + b) << endl;
  }

  return 0;
}