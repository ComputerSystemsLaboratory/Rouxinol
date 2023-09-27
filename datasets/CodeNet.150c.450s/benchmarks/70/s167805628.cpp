#include<iostream>
using namespace std;

int main(void){
  int a, b;
  int m[] = {0, 0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335};
  int r = 0;
  while(1){
    cin >> a >> b;
    if(a == 0 && b == 0) break;
    r = (m[a] + b) % 7;
    switch (r)
    {
    case 0:
      cout << "Wednesday" << endl;
      break;
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
    }
  }
  return 0;
}