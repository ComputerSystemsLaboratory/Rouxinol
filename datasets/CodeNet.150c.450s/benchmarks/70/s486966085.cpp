#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

const int n_day[] = {0,31,29,31,30,31,30,31,31,30,31,30,31};
const string name[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

int main() {
  int m, d;
  while(cin >> m >> d && (m|d)) {
    pair<int,int> end(m,d), date(1,1);
    int e = 4;
    while(date != end) {
      e = (e+1)%7;
      if(date.second == n_day[date.first]) {
	++date.first;
	date.second = 1;
      } else {
	++date.second;
      }
    }
    cout << name[e] << endl;
  }
  return 0;
}