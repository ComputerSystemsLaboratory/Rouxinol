#include <iostream>
using namespace std;

int main(void){
  
  int n, k, ansdays[100] = {0};

  cin >> n;
  for(k = 0; k < n; k++) {
    int byear, bmonth, bday, i, j, days;
    cin >> byear >> bmonth >> bday;

    if (byear % 3 != 0 && bmonth % 2 == 0) {
      days = 19 - bday;
    } else {
      days = 20 - bday;
    }

    if (byear % 3 == 0) {
      days += (10 - bmonth) * 20;
    } else {
      for (i = bmonth+1; i <= 10; i++) {
	if (i % 2 == 0) {
	  days += 19;
	} else {
	  days += 20;
	}
      }
    }

    for (j = byear+1; j < 1000; j++) {
      if (j % 3 == 0) {
	days += 200;
      } else {
	days += 195;
      }
    }
    ansdays[k] = days + 1;
  }

  for (k = 0; k < n; k++) {
    cout << ansdays[k] << endl;
  }

  return 0;
}