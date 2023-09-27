#include <iostream>
using namespace std;

int main() {
	while (1) {
		int n;
		cin >> n;
		if ( n == 0 ) break;
		int a[5000];
		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
		}
		int ans = a[0];
		int pn;
		for ( int i = 0; i < n; i++ ) {
			pn = 0;
			for ( int j = 0; i + j < n; j++ ) {
				pn += a[i + j];
				if ( pn > ans ) ans = pn;
			}
		}
		cout << ans << endl;
	}
}