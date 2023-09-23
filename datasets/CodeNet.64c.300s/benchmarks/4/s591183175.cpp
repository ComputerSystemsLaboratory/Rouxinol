#include <iostream>
using namespace std;

int main() {
	double a, b, c;
	cin >> a >> b >> c;
	if (a < b & a < c & b < c) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	return 0;
}