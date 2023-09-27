#include <iostream>

using namespace std;

const int DAYS_NUM[12] =
  {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

const string days[7] = {
  "Monday", "Tuesday", "Wednesday", "Thursday",
  "Friday", "Saturday", "Sunday"
};

int main() {
  int m, d;
  string day;
  while(1) {
    cin >> m >> d;
    if (m == 0) break;
    for (int i = 0; i < m - 1; i++)
      d += DAYS_NUM[i];
    d = (d + 2) % 7;
    cout << days[d] << endl;
  }
  return 0;
}