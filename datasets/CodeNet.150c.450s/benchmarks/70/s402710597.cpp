#include <iostream>

using namespace std;

int main(void) {
  int month[13];
  month[1] = 31;
  month[2] = 29;
  month[3] = 31;
  month[4] = 30;
  month[5] = 31;
  month[6] = 30;
  month[7] = 31;
  month[8] = 31;
  month[9] = 30;
  month[10] = 31;
  month[11] = 30;
  month[12] = 31;

  int m, d, days;
  while(cin >> m >> d) {
    if(m == 0) break;
    
    days = d;
    for(int j = 1; j < m; j++) {
      days = days + month[j];
    }
    if(days%7 == 0) {
      cout << "Wednesday" << '\n';
    } else if(days%7 == 1) {
      cout << "Thursday" << '\n';
    } else if(days%7 == 2) {
      cout << "Friday" << '\n';
    } else if(days%7 == 3) {
      cout << "Saturday" << '\n';
    } else if(days%7 == 4) {
      cout << "Sunday" << '\n';
    } else if(days%7 == 5) {
      cout << "Monday" << '\n';
    } else if(days%7 == 6) {
      cout << "Tuesday" << '\n';
    }
  }

  return 0;
}