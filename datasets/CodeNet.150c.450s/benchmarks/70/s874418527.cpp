#include <bits/stdc++.h>

using namespace std;

inline bool isLeapYear(int year) {
  return year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);
}

inline int countLeapYear(int year) {
  return year / 4 - year / 100 + year / 400;
}

inline int getMaxDay(int year, int month) {
  const int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  if (month == 2) return isLeapYear(year) ? 29 : 28;
  return days[month];
}

struct Day {
  int year, month, day;

  enum {SUN, MON, TUE, WED, THU, FRI, SAT};

  Day() : year(0), month(0), day(0) {}

  Day(int year, int month, int day) : year(year), month(month), day(day) {}

  int fairfield() const {
    int y = year, m = month;
    if (m <= 2) --y, m += 12;
    return 365 * y + countLeapYear(y) + (153 * (m + 1) / 5) + day - 428;
  }

  int operator-(const Day& day) const {
    return fairfield() - day.fairfield();
  }

  bool operator<(const Day& day) const {
    if (year != day.year) return year < day.year;
    if (month != day.month) return month < day.month;
    return this->day < day.day;
  }

  Day operator++() {
    ++day;
    if (getMaxDay(year, month) < day) {
      ++month;
      day = 1;
      if (month == 13) {
        ++year;
        month = 1;
      }
    }
    return *this;
  }

  int dayOfTheWeek() {
    return fairfield() % 7;
  }
};

bool solve() {
  int m, d;
  cin >> m >> d;
  if (m == 0 && d == 0) return false;
  Day day(2004, m, d);
  string week[]{"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
  cout << week[day.dayOfTheWeek()] << endl;
  return true;
}

int main() {
  while (solve());
}