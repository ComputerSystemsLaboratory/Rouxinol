#include <iostream>
using namespace std;
int main(void)
{
  int m, d;
  
  while(1) {
    cin >> m >> d;
    if(m == 0) break;
    
    for(int i = m ; i > 1 ; i--) {
      if(i-1 == 4 || i-1 == 6 || i-1 == 9 || i-1 == 11) d += 30;
      else if(i-1 == 2) d += 29;
      else if(i-1 == 1 || i-1 == 3 || i-1 == 5 || i-1 == 7 || i-1 == 8 || i-1 == 10) d += 31;
    }
    
    if(d % 7 == 1) cout << "Thursday" << endl;
    if(d % 7 == 2) cout << "Friday" << endl;
    if(d % 7 == 3) cout << "Saturday" << endl;
    if(d % 7 == 4) cout << "Sunday" << endl;
    if(d % 7 == 5) cout << "Monday" << endl;
    if(d % 7 == 6) cout << "Tuesday" << endl;
    if(d % 7 == 0) cout << "Wednesday" << endl;
  }
  return 0;
}