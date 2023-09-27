#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;


int main() {
	int n;
	int o = 0;
	
	while (cin >> n, n != 0) {
		o = 100;
		vector<int> a(10000, 0);
		vector<int> b(10000, 0);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a.rbegin(), a.rend());

		for (int i = 0; i < n - 1; i++) {
			b[i] = a[i] - a[i + 1];
		}
		for (int i = 0; i < n - 1; i++) {
			if (i == 0) {
				o = b[0];
			}
			else {
				if (b[i] < o) {
					o = b[i];
				}
			}
		}
		cout << o << endl;
	}
}
