#include <bits/stdc++.h>
using namespace std;

int main() {
  int month,day;
  int md[] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
  while ( cin >> month >> day, month || day ) {
    int total = 0;
    for ( int i = 0; i < month-1; i++ ) total += md[i];
    total += day;
    if ( total % 7 == 1 ) cout << "Thursday" << endl;
    else if ( total % 7 == 2 ) cout << "Friday" << endl;
    else if ( total % 7 == 3 ) cout << "Saturday" << endl;
    else if ( total % 7 == 4 ) cout << "Sunday" << endl;
    else if ( total % 7 == 5 ) cout << "Monday" << endl;
    else if ( total % 7 == 6 ) cout << "Tuesday" << endl;
    else if ( total % 7 == 0 ) cout << "Wednesday" << endl;
  }
  return 0;
}