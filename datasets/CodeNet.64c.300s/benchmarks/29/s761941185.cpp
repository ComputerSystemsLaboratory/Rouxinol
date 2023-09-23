#include<iostream>
using namespace std;

int main(){
  int i,j,e,x,y,z,m,min;
  while(1){
    min=1000000;
    cin >> e;
    if(e==0)break;
    for(y = 0; y <=1000; y++){
      for(z = 0; z<=100; z++){
	x=e-y*y-z*z*z;
	m=x+y+z;
	if(min>m && x>=0 && y>=0 && z>=0){
	  //cout << "x" << x << " " << "y" << y << " " << "z" << z << endl;
	  min=m;
	  // cout << "min" << min << endl;
	}
      }
    }
    cout << min << endl;
  }
  return 0;
}