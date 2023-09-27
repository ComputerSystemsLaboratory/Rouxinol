#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  for(int i = 0; i < n; ++i) {
    int y, m, d;
    cin >> y >> m >> d;
    int days = 0;
    days += ((y - 1) - ((y - 1) / 3)) * 195;
    days += (y - 1) / 3 * 200;
    if(y % 3 == 0) {
      days += (m - 1) * 20;
    } else {
      days += ((m - 1) / 2) * 39;
      if((m - 1) % 2 != 0) days += 20;
    }
    days += d;
    cout << 196470 - days + 1 << endl;
  }
  return 0;
}