#include<bits/stdc++.h>
using namespace std;
int main(){
  int e,minx,x,y,z;
  while(cin >> e && e){
    if(e == 1)cout << 1 << endl;
    else{
      minx = 1000001;
      for(z=0;z*z*z<=e;z++){
	y = (int)sqrt(e-z*z*z);
	x = e-z*z*z-y*y;
	minx = min(minx,x+y+z);
      }
      cout << minx << endl;
    }
  }
}