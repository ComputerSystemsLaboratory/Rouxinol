#include <iostream>
using namespace std;

int main() {
	int n;
	int k[251];
	cin >> n;
	for ( int i = 1; i <= n; i++ )
		cin >> k[i];
	for ( int i = 1; i <= n; i++ ) {
		cout << "node " << i << ": key = " << k[i] << ", ";
		if ( i > 1 ) cout << "parent key = " << k[i / 2] << ", ";
		if ( n >= i * 2 ) cout << "left key = " << k[i * 2] << ", ";
		if ( n >= i * 2 + 1 ) cout << "right key = " << k[i * 2 + 1] << ", ";
		cout << endl;
	}
}