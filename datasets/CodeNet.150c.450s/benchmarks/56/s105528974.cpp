#include <iostream>
using namespace std;

int main()
{
  int n, x, min = 1000001, max = -1000001;
  long sum = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> x;
    if (x > max) max = x;
    if (x < min) min = x;
    sum += x;
  }
  cout << min << ' ' << max << ' ' << sum << endl;
}

