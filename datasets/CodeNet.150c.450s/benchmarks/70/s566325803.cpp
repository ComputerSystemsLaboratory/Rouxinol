#include <iostream>
using namespace std;
int main() {
  int mon, day;
  string youbi[7] = {"Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday"};
  int tDay[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int yb;

  while(cin >> mon >> day && mon) {
    yb = 0;
    for(int i = 0; i < mon-1; i++) {
      yb += tDay[i];
    }
    yb += day-1;
    yb %= 7;
    
    cout << youbi[yb] << endl;
  }
 
  return 0;
}