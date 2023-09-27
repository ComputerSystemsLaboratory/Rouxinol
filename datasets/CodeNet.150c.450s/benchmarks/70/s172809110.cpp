#include <iostream>
using namespace std;
void whatday(int year, int month, int date) {
  string day[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
  if(month == 1 || month == 2) {
	year--;
	month += 12;
  }
  int YEAR = year / 100;
  int h = (year + (year >> 2) - YEAR + (YEAR >> 2) + (13*month + 8)/5 + date) % 7;
  cout << day[h] << endl;
}
int main() {
  int month, day;
  while(cin >> month >> day) {
	if(month == 0 && day == 0) break;
	whatday(2004, month, day);
  }

  return 0;
}