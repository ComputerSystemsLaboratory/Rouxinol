#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	
	if (b - a > 0 && c - b > 0) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
}