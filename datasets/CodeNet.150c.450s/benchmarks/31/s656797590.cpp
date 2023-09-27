#include <iostream>
using namespace std;

int main(void)
{
  int n;
  int r, rmin, rmax;
  cin >> n;
  cin >> rmin;
  rmax = -1000000000;
  for (int i=0; i<n-1; ++i) {
    cin >> r;
    if ((r - rmin) > rmax) rmax = r - rmin;
    if (r < rmin) rmin = r;
  }
  cout << rmax << endl;
}