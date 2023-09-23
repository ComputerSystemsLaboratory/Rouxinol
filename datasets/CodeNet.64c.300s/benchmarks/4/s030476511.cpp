#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	(a < b) ? (b < c) ? cout << "Yes" << endl : cout << "No" << endl : cout << "No" << endl;
	
	return 0;
}