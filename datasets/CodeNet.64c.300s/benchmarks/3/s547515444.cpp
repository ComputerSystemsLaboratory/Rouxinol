#include<iostream>
using namespace std;

int main() {
	int n,a[101];
	cin >> n;
	for ( int i = 0; i < n; i++ ) {
		cin >> a[i];
	}
	for ( int i = 0; i < n; i++ ) {
		cout << a[n - i -1];
		if ( i != n - 1 ) cout << " ";
	}
	cout << endl;
}
