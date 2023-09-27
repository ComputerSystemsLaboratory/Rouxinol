#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
  int E,z,y,x;
  while (cin >> E && E>0){
    if (E>1000000){
    cout << "Incorrect input" << endl;
    exit(1);
    }
    int	min=10000000;
    for (z=0;z*z*z<=E;z++){
      for (y=0;y*y+z*z*z<=E;y++){
	x=E-y*y-z*z*z;
        if(min > x+y+z)
          min=x+y+z;
      }
    }
    cout << min << endl;
  }
}