#include <iostream>

using namespace std;

int main() {
	int n, m, count = 0;
	int s[10000], t[500];

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> t[i];
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (t[i] == s[j]) {
				count++;
				break;
			}
		}
	}

	cout << count << endl;

	return 0;
}