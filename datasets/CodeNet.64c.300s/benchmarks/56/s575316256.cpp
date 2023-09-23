// Millennium
#include <iostream>
using namespace std;

struct Date {
  int year, month, day;

  void Increment() {
    day += 1;
    int day_of_month = (year % 3 != 0 && month % 2 == 0) ? 19 : 20;
    if (day > day_of_month) {
      day = 1;
      month += 1;
      if (month > 10) {
        month = 1;
        year += 1;
      }
    }
  }
};


int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  int n; cin >> n;
  for (int i = 0; i < n; ++i) {
    Date d; cin >> d.year >> d.month >> d.day;
    int ans = 0;
    while (d.year < 1000) {
      d.Increment();
      ++ans;
    }
    cout << ans << endl;
  }
}