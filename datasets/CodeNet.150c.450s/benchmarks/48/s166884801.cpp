#include<bits/stdc++.h>
using namespace std;

int main(){

  int x,y,z;
  int min;
  int e;
  
  //x + y^2 + z^3 = e
  //x = e - y^2 - z^3

  while(cin>>e , e){
    min = 1000000;

    y=0;
    while(y*y <= e){
      z=0;
      while(y*y+z*z*z <= e){
	x = e-y*y-z*z*z;
	if(x+y+z < min){
	  min = x+y+z;
	  //cout << e << '=' << x+y*y+z*z*z << endl;
	}

	z++;
      }
      y++;
    } 

    cout << min << endl;

  }

  return 0;
}