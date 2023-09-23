#include<iostream>
#include<cmath>
using namespace std;

int main(){
  while(true){
    int min_m = 100000000;
    int e;
    cin >> e;
    if( e == 0 ) break;
    for(int z = 0; z <= 100; ++z){
      for(int y = 0; y <= 1000; ++y){
	int x = e -  (int)pow((double)z,3) - (int)pow((double)y,2);
	if( x >= 0 )
	  min_m = min( min_m, x + y + z );
      }
    }
    cout << min_m << endl;
  }
  return 0;
}