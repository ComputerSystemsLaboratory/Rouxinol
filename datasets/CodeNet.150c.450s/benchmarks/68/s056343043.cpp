#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;

	while (cin >> n, n) {
			int point[50000];
			for (int i = 0; i < n; i++) {
				cin >> point[i];
			}
		
		sort(point, point + n);

		int ans = 1000000;
		for (int i = 0; i < n-1; i++) {
			ans = min(ans, point[i+1] - point[i]);
		}

		cout << ans << endl;
	}
	return 0;
}