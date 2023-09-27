#include <iostream>
using namespace std;

int main(void)
{
  int i, n;
  cin >> n;
  long long r[n], max = 0, min = 1000000000, diff = -1000000000;
  for (i = 0; i < n; i++) {
    cin >> r[i];
  }
  for (i = 0; i < n; i++) {
    if (i == 0) {
      max = r[i];
      min = r[i];
      continue;
    }
    if ((r[i] - min) > diff) diff = r[i] - min;
    if (r[i] < min) min = r[i];
  }
  cout << diff << endl;
  return 0;
}