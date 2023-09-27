#include <iostream>
#include <string>
using namespace std;

int main() {

  string week[7] = {
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday",
    "Sunday",
  };
  int end_day[13] = {-1,31,29,31,30,31,30,31,31,30,31,30,31};
  int month,day;
  while(cin >> month >> day) {
    if(month == 0) break;
    int today = 3; // because, 1/1 is Thursday
    for(int m = 1;m <= month;m++) {
      for(int d = 1;d <= end_day[m];d++) {
        if(m == month && d == day) break;
        today = (today + 1) % 7;
      }
    }
    cout << week[today] << endl;
  }
}