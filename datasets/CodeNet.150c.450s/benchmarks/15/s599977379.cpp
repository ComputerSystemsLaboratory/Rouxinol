#include "iostream"

using namespace std;

int main() {

	int n, q;
	int s[10000], t[500];

	int a = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	cin >> q;

	for (int i = 0; i < q; i++) {
		cin >> t[i];
	}

	for (int i = 0; i < q; i++) {
		for (int j = 0; j < n; j++) {
			if (t[i] == s[j]) {
				a++;
				break;
			}
		}
	}

	cout << a << endl;

	return 0;
}