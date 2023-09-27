#include <iostream>
#include <string>
using namespace std;

int main() {
  int days[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
  string youbi[7] = {"Monday","Tuesday","Wednesday","Thursday",
		     "Friday","Saturday","Sunday"};
  while(1) {
    int mon, day;
    cin >> mon >> day;
    if(mon == 0) break;

    int sum = 0;
    for(int i = 0; i < mon-1; i++) {
      sum += days[i];
    }
    sum += day;

    cout << youbi[(sum+2)%7] << endl;
  }
  return 0;
}