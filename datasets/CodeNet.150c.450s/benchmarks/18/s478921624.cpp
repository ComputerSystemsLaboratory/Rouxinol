#include <iostream>
using namespace std;
int main() {
  int n, a = 100000;
  cin >> n;
  while(n--) {
	a *= 1.05;
	if(a % 1000 > 0) {
	  a += 1000;
	  a -= (a % 1000);
	}
  }
  cout << a << endl;
  return 0;
}