#include<iostream>
using namespace std;

int main(){
  int e = 1;
  while(e > 0){
    cin >> e;
    int x,y,z,s;
    s = e;
    y = 0;
    z = 0;
    while(z*z*z<=e){
      while(y*y<=e-z*z*z){
	int s1;
	x = e-z*z*z-y*y;
	s1 = x+y+z;
	if(s>s1){
	  s = s1;
	}
	y+=1;
      }
      z+=1;
      y=0;
    }
    if(e > 0){
    cout << s <<endl;
    }
  }
}