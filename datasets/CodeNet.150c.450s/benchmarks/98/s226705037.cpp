#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n, m;
	while (1) {
		cin >> n >> m;

		if (n == 0 && m == 0) { 
			return 0;
		}

		int a[100000];
		int b[100000];

		int a_total = 0;
		int b_total = 0;

		int ans1 = 100000;
		int ans2 = 100000;

		for (int i = 0; i < n; i++) {
			cin >> a[i];
			a_total += a[i];
		}
		for (int i = 0; i < m; i++) {
			cin >> b[i];
			b_total += b[i];
		}


		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (a_total - a[i] + b[j] == b_total - b[j] + a[i]) {
					if (a[i] + b[j] < ans1 + ans2) {
						ans1 = a[i];
						ans2 = b[j];
					}
				}
			}
		}
		if (ans1 != 100000) {
			cout << ans1<<" "<<ans2 << endl;
		}
		else {
			cout << -1 << endl;
		}
		
		
	}


}