#include <iostream>
using namespace std;

int main() {

  int n, i, m = 0, x = 2;

  cin >> n;
  
  for(i = 3; i <= n; i++) {
    if(i % 3 == 0) cout << " " << i;
    else if(i % 10 == 3) cout << " " << i;
    else if(i % 3 != 0) {
      x = i;
      while(1 < x) {
	x = x / 10;
	if(x % 10 == 3) {
	  cout << " " << i;
	  break;
	}
      }
    }
  }

  cout << "\n";
  
  return 0;
}