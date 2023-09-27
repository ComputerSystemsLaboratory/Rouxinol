#include <iostream>

using namespace std;

string dow[] = {
  "Monday",
  "Tuesday",
  "Wednesday",
  "Thursday",
  "Friday",
  "Saturday",
  "Sunday"
};
int month[] = {
  31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
};

int main() {
  int m, d;
  while (cin >> m >> d) {
    if (m == 0) break;
    m--; d--;

    int day = 0;
    for (int i = 0; i < m; i++) {
      day += month[i];
    }
    day += d;
    day += 3;
    day %= 7;

    cout << dow[day] << endl;
  }

  return 0;
}