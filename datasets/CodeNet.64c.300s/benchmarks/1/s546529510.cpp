#include "iostream"

using namespace std;

int main() {

	int n;
	int lpos;
	int s[100000];

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	int p = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] <= s[n - 1]) {
			int x = s[i];
			s[i] = s[p];
			s[p] = x;
			
			if (i == n - 1) {
				lpos = p;
			}

			p++;
		}
	}

	for (int i = 0; i < n; i++) {
		if (i == lpos) cout << "[" << s[i] << "]";
		else cout << s[i];
		if (i < n - 1) cout << " ";
	}
	cout << endl;

	return 0;
}