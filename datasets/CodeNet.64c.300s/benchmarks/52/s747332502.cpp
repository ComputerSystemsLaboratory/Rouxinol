#include <iostream>

using namespace std;

int main() {

	while(true) {
		int n,s;
		cin >> n >> s;
		if (!n && !s) break;

		int ans = 0;

		for (unsigned i = 0; i < 1<<10; ++i) {
			int sum = 0, cnt = 0;
			for(unsigned j = 0; j < 10; ++j) {
				if ((i>>j)&1) {
					sum += j;
					cnt++;
				}
			}

			if (sum == s && cnt == n) ans++;
		}

		cout << ans << endl;
	}

	return 0;
}