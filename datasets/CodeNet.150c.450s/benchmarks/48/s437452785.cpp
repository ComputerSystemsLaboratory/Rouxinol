#include<iostream>
#include<algorithm>

using namespace std;

int main() {
  int e;
  while(cin >> e, e != 0) {
    int min = 4000000;
    for(int z = 0; z <= 100 ;z++)
      for(int y = 0; y <= 1000;y++) {
	int x = e - y*y - z*z*z;
	if(x >= 0 && x + y + z < min)
	  min = x + y + z;
      }
    cout << min << endl;
  }
    
}