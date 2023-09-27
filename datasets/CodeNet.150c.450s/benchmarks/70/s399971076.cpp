#include <iostream>

using namespace std;

int main()
{
  int m, d;
  while(1){
    cin >> m >> d;
    if(m == 0 && d == 0){
      break;
    }else{
      int n = d - 1;
      for(int i = m - 1; i > 0; i--)
	if(i >= 8)
	  if(i & 1)
	    n += 30;
	  else
	    n += 31;
	else if(i == 2)
	  n += 29;
	else
	  if(i & 1)
	    n += 31;
	  else
	    n += 30;
      switch(n % 7){
      case 0 : cout << "Thursday" << endl; break;
      case 1 : cout << "Friday" << endl; break;
      case 2 : cout << "Saturday" << endl; break;
      case 3 : cout << "Sunday" << endl; break;
      case 4 : cout << "Monday" << endl; break;
      case 5 : cout << "Tuesday" << endl; break;
      case 6 : cout << "Wednesday" << endl; break;
      }
    }
  }
}