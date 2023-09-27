#include <iostream>
using namespace std;

int date_to_days(int y, int m, int d)
{
  int days = 0;
  for (int i = 1; i < y; ++i) {
    if (i % 3 == 0) days += 20 * 10;
    else days += (20 + 19) * 5;
  }
  for (int i = 1; i < m; ++i) {
    if (i % 2 == 0 && y % 3 != 0) days += 19;
    else days += 20;
  }

  days += d - 1;
  return days;
}

int main()
{
  int n;
  cin >> n;
  int premium = date_to_days(1000, 1, 1);
  for (int i = 0; i < n; ++i) {
    int y, m, d;
    cin >> y >> m >> d;
    cout << premium - date_to_days(y, m, d) << endl;
  }
}