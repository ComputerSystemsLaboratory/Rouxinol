#include <iostream>
using namespace std;
int main () {
	int a, b, c, d, e = 0;
	cin >> a >> b >> c;
	
		for (int d = a; d <= b; d = d + 1) {
			if (c % d == 0) {
				e = e + 1;
			} 
		} cout << e << endl;
	
	return 0;
}
