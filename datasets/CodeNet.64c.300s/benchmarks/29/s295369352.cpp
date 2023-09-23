#include<bits/stdc++.h>
#define dump(a) cout << #a << "=" << a << endl
using namespace std;


int main() {
	int E;
	while(cin >> E) {
		if (E == 0) { break; }

		int min_m = INT_MAX;
		for(int z = 0; z <= 100; z++) {
			for(int y = 0; y <= 1000; y++) {
				int x = E - y*y - z*z*z;
				if (x >= 0) {
					int m = x + y + z;
					min_m = min(m,min_m);
				}
			}
		}
		cout << min_m << endl;
	}

	return EXIT_SUCCESS;
}