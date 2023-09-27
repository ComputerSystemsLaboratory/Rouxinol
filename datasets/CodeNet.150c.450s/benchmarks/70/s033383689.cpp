#include <iostream>
using namespace std;

int main() {
  int month, date;
  int day[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  const char *label[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
  int day_sum[12];
  int x;

  day_sum[0] = 0;
  for (int i=1; i<12; i++) {
    day_sum[i] = day_sum[i-1] + day[i-1];
  }

  while (1) {
    cin >> month >> date;
    if (!month && !date) break;
    x = day_sum[month-1] + date + 2;
    cout << label[x%7] << endl;
  }

  return 0;
}