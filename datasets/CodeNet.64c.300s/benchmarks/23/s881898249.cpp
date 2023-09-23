#include <iostream>
using namespace std;
int main () {
	int a, b, area, sur;

	cin >> a >> b;

	if ( ((a >= 1) && (a <= 100)) && ((b >= 1) && (b <= 100)) ) {
		area = a * b;
		sur = 2*a + 2*b;
	    cout << area << " " << sur << "\n";
	} else {
		cout << "Input number is invalid.\n";
	}
	return 0;
}