#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int n, p;
	while (cin >> n >> p) {
		if (n == 0 && p == 0)
			break;

		int ans = -1, bp = p;
		vector<int> r(n, 0);
		for (int i = 0; ; ++i) {

			if (p == 0) {
				p = r[i%n];
				r[i%n] = 0;
			} else {
				--p;
				++r[i%n];
				if (p == 0) {
					for (unsigned int j = 0; j < r.size(); ++j) {
						if (r[j] == bp) {
							ans = j;
							break;
						}
					}

					if (ans != -1)
						break;
				}
			}

		}
		cout << ans << endl;
	}

	return 0;
}