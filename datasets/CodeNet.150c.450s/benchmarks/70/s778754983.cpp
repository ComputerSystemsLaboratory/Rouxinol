#include <iostream>
using namespace std;

int main()
{
  int m, d;
  while (1){
    cin >> m >> d;
    if (m == 0){
      break;
    }
    if (m == 2){
      d += 31;
    }
    if (m == 3){
      d += 60;
    }
    if (m == 4){
      d += 91;
    }
    if (m == 5){
      d += 121;
    }
    if (m == 6){
      d += 152; 
    }
    if (m == 7){
      d += 182;
    }
    if (m == 8){
      d += 213;
    }
    if (m == 9){
      d += 244;
    }
    if (m == 10){
      d += 274;
    }
    if (m == 11){
      d += 305;
    }
    if (m == 12){
      d += 335;
    }

    if (d % 7 == 0){
      cout << "Wednesday";
    }
    else if (d % 7 == 1){
      cout << "Thursday";
    }
    else if (d % 7 == 2){
      cout << "Friday";
    }
    else if (d % 7 == 3){
      cout << "Saturday";
    }
    else if (d % 7 == 4){
      cout << "Sunday";
    }
    else if (d % 7 == 5){
      cout << "Monday";
    }
    else {
      cout << "Tuesday";
    }
    cout << endl;
  }

  return 0;
}