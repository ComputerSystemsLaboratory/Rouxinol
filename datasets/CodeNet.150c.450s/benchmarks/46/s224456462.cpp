#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	int n, x;
	vector<int> v;

	while (cin >> n >> x) {
		if (n == 0 && x == 0) {
			break;
		}

		int cnt = 0;
		for (int a = 1; a < n - 1; a++) {
			for (int b = a + 1; b < n; b++) {
				for (int c = b + 1; c <= n; c++) {
					if ((a + b + c) == x) {
						cnt++;
					}
				}
			}
		}
		v.push_back(cnt);
	}

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}

	return 0;
}