#include <iostream>
using namespace std;
int main() {
  int a[4];
  while(cin >> a[0] >> a[1] >> a[2] >> a[3]) {
    int hit = 0, blow = 0;
    for(int i = 0; i < 4; i++) {
      int b;
      cin >> b;
      if(b == a[i]) {
	hit++;
      } else {
	for(int j = 0; j < 4; j++) {
	  if(b == a[j]) {
	    blow++;
	    break;
	  }
	}
      }
    }
    cout << hit << ' ' << blow << endl;
  }
  return 0;
}