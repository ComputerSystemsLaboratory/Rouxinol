#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n;
	while (cin >> n, n) {
		int ans = 1145141919;
		for (int y = 0; y <= 1000; y++) {
			for (int z = 0; z <= 100; z++) {
				if (n < y*y + z*z*z)continue;
				ans = min(ans, n - y*y - z*z*z + y + z);
			}
		}
		cout << ans << endl;
	}return 0;
}