#include <iostream>
#include <string>
using namespace std;


int main() {
  const int n_day[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  const string week_name[] = {
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday",
    "Sunday",
    "Monday",
    "Tuesday"
  };


  int m, d, sum=0;
  cin >> m >> d;
  while(m != 0 && d != 0) {
    m--;
    for(int i=0; i<m; i++) {
      sum += n_day[i];
    }
    sum += d;
    cout << week_name[sum%7] << endl;
    sum = 0;
    cin >> m >> d;
  }
  return 0;
}