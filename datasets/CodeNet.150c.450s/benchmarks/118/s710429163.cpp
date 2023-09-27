#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	for(int i = 0; i < n; ++i) {
		int y, m, d;
		cin >> y >> m >> d;

		int cnt = 0;
		for(int i = y; i < 1000; ++i) {
			for(int j = m; j <= 10; ++j) {
				const int limit = !(j & 1) && i % 3 > 0 ? 19 : 20;
				for(int k = d; k <= limit; ++k)
					++cnt;

				d = 1;
			}
			m = 1;
		}

		cout << cnt << endl;
	}

	return EXIT_SUCCESS;
}