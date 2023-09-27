#include <iostream>

using namespace std;

int main(void){

  int month;
  int day;
  int day2;

  while(1){

    day2 = 0;

    cin >> month >> day;
    if( month == 0 && day == 0 )break;

    for( int i = 1 ; i < month ; i++ ){
      switch(i){
      case 1:
      case 3:
      case 5:
      case 7:
      case 8:
      case 10:
      case 12:
	day2 += 31;
	break;
      case 2:
	day2 += 29;
	break;
      case 4:
      case 6:
      case 9:
      case 11:
	day2 += 30;
	break;
      }
    }
    day2 += day;
      switch(day2 % 7){
      case 1:
	cout << "Thursday" << endl;
	break;
      case 2:
	cout << "Friday" << endl;
	break;
      case 3:
	cout << "Saturday" << endl;
	break;
      case 4:
	cout << "Sunday" << endl;
	break;
      case 5:
	cout << "Monday" << endl;
	break;
      case 6:
	cout << "Tuesday" << endl;
	break;
      case 0:
	cout << "Wednesday" << endl;
    }
  }
  return 0;
}