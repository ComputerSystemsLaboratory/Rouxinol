#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  long a[10000], n;
  long tmp, _max = -1000000, _min = 1000000;
  double _sum = 0;
  cin >> n;
  while (n--) {
    cin >> tmp;
    if (_max < tmp) _max = tmp;
    if (_min > tmp) _min = tmp;
    _sum += tmp;
  }
  cout << _min << ' '
       << _max << ' '
       << fixed << setprecision(0) << _sum << endl;
}