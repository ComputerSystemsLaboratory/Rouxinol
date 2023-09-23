#include <iostream>
using namespace std;

int main()
{
  int n;
  while (cin >> n) {
    unsigned long long int f = 1;
    for (int i = 2; i < n+1; ++i)
      f *= i;
    cout << f << endl;
  }
  return 0;
}