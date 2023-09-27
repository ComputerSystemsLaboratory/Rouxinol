#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	(a < b) ? 
		(b < c) ? 
			cout << a << " " << b << " " << c << endl :
			(a < c) ?
				cout << a << " " << c << " " << b << endl :
				cout << c << " " << a << " " << b << endl :
		(a < c) ?	
			cout << b << " " << a << " " << c << endl :	
			(b < c) ?
				cout << b << " " << c << " " << a << endl :	
				cout << c << " " << b << " " << a << endl ;	
	
	return 0;
}