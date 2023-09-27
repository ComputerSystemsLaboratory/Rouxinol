#include <cstdio>

using namespace std;

int main() {
  int days[] = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
  const char* wdays[] = {
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday",
    "Sunday",
    "Monday",
    "Tuesday"
  };

  int month, day;
  while (true) {
    scanf("%d %d", &month, &day);
    if (month == 0) { break; }

    int acc_days = 0;
    for (int i = 0; i < month; ++i) { acc_days += days[i]; }
    acc_days += day;
    puts(wdays[acc_days % 7]);
  }

  return 0;
}