#include <iostream>
using namespace std;

int main() {
  int month,day,total,weekday;
  while(cin >> month >> day) {
    if((month == 0)&&(day == 0)) break;
    total = 0;
    for(int i=1;i < month + 1;i++) {
      if(i == month) {
        total += day;
      }
      else if(i != month) {
        if((i == 1)||(i == 3)||(i == 5)||(i == 7)||(i == 8)||(i == 10)||(i == 12))
          total += 31;
        else if((i == 4)||(i == 6)||(i == 9)||(i == 11))
          total += 30;
        else if(i == 2)
          total += 29;
      }
    }
    weekday = total % 7;
    if(weekday == 0)
      cout << "Wednesday" << endl;
    else if(weekday == 1)
      cout << "Thursday" << endl;
    else if(weekday == 2)
      cout << "Friday" << endl;
    else if(weekday == 3)
      cout << "Saturday" << endl;
    else if(weekday == 4)
      cout << "Sunday" << endl;
    else if(weekday == 5)
      cout << "Monday" << endl;
    else if(weekday == 6)
      cout << "Tuesday" << endl;
  }
}