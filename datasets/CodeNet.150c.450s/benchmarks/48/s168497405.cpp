#include <iostream>
using namespace std;

int main() {
	int e, ans;
	while ( cin >> e && e != 0 ) {
		ans = 1000000;
		for ( int z = 0; z * z * z <= e; z++ ) {
			for ( int y = 0; z * z * z + y * y <= e; y++ ) {
				int x = e - z * z * z - y * y;
				if ( x + y + z < ans ) ans = x + y + z;
			}
		}
	cout << ans << endl;
	}
}