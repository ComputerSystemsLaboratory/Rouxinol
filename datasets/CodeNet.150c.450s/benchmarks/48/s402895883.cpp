#include <iostream>

using namespace std;

int main() {
	int e;
	while ( cin >> e, e ) {
		int ans = e;
		for (int z = 0; z*z*z <= e; ++z) {
			for (int y = 0; z*z*z + y*y <= e; ++y) {
				int x = e - (y*y + z*z*z);
				ans = min(ans, x+y+z);
			}
		}
//		int x = 0, y = 0, z = 0;
//		if (e >= 8) { for (z = 2; z*z*z <= e; ++z); --z, e -= z*z*z; }
//		if (e >= 4) { for (y = 2; y*y <= e; ++y); --y, e -= y*y; }
//		x = e;
		cout << ans << endl;
	}
}