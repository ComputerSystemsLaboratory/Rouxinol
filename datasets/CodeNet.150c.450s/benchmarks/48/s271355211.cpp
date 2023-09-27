#include <iostream>
#include <algorithm>
using namespace std;

int e;

int main() {
	while (cin >> e) {
		if (!e) break;
		
		int ans = 1145141919;
		for (int z = 0; z * z * z <= e; z++) {
			for (int y = 0; y * y <= e - z * z * z; y++) {
				int x = e - y * y - z * z * z;
				if (x < 0) continue;
				ans = min(ans, x + y + z);
			}
		}
		cout << ans << endl;
	}
	return 0;
}