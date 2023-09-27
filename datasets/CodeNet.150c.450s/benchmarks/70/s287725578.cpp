#include <iostream>
using namespace std;

int main() {

  int input1,input2;

  int days[12] = {31,29,31,30,31,30,31,31,30,31,30,31};

  while(true) {

    cin >> input1 >> input2;
    if ( input1 == 0 ) break;

    int cnt = 0;

    for ( int i = 0; i < input1-1; i++ ) {
      cnt += days[i];
    }
    cnt += input2-1;

    int week = ( cnt + 3 ) % 7;

    if ( week == 0 ) {
      cout << "Monday";
    }else if ( week == 1 ) {
      cout << "Tuesday";
    }else if ( week == 2 ) {
      cout << "Wednesday";
    }else if ( week == 3 ) {
      cout << "Thursday";
    }else if ( week == 4 ) {
      cout << "Friday";
    }else if ( week == 5 ) {
      cout << "Saturday";
    }else {
      cout << "Sunday";
    }
    cout << endl;

  }

  return 0;

}