#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef vector<int> VI;
typedef pair<int, int> PI;

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int x = i;
		if (x % 3 == 0) {
			cout << " " << i;
			continue;
		}
		do {
			if (x % 10 == 3) {
				cout << " " << i;
				break;
			}
			x /= 10;
		} while (x);
	}
	cout << endl;
	return 0;
}
