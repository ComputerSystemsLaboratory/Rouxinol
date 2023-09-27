#include <iostream>
using namespace std;

int main() {
  while(1) {
    int e;
    cin >> e;
    if(e == 0) break;
    int min = -1;
    for(int z = 0; z*z*z <= e; z++) {
      for(int y = 0; y*y <= e; y++) {
	int x = e - (y*y + z*z*z);
	if(x < 0) break;
	int m = x + y + z;
	if(min == -1 || m < min) min = m;
      }
    }
    cout << min << endl;
  }
  return 0;
}