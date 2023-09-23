#include <iostream>
#include <algorithm>

using namespace std;

int main() {	
	while (true) {
		int e;
		int ans = 1e+9;
		cin >> e;
		if (e == 0) {
			break;
		}
		
		for (int z = 100; z >= 0; z--) {
			for (int y = 1000; y >= 0; y--) {
				int x;
				if (e >= z * z * z + y * y) {
					x = e - z * z * z - y * y;
					ans = min(ans, x + y + z);
				}
			}
		}
		
		cout << ans << endl;
	}
	
	return 0;
}