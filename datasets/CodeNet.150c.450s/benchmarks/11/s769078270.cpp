#include <iostream>
using namespace std;

int main() {

	int n, t[52], f;
	char s[52], suit[4] = { 'S','H','C','D' };

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> s[i] >> t[i];
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 1; j <= 13; j++) {
			f = 1;
			for (int k = 0; k < n; k++) {
				if (s[k] == suit[i] && t[k] == j) {
					f = 0;
				}
			}
			if (f == 1) {
				cout << suit[i] << " " << j << "\n";
			}
		}
	}
	

	return 0;
}