#include <iostream>
using namespace std;
int main() {
  int d;
  
  while(cin >> d) {
	int n = 600 / d;
	int sum = 0;
	for(int k = 0; k < n; ++k) {
	  sum += d * (k * d) * (k * d);
	}
	cout << sum << endl;
  }
  return 0;
}