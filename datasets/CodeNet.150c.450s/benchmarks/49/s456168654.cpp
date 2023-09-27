#include <iostream>
using namespace std;

int main() {
	int nn = 0;
	int ans[100];
	while (1) {
		int n, maxn, minn;
		int pn = 0;
		cin >> n;
		if ( n == 0 ) break;
		int s[n];
		for (int i = 0; i < n; i++) {
			cin >> s[i];
			if ( i == 0 ) {
				maxn = s[0];
				minn = s[0];
			} else {
				if ( s[i] > maxn ) maxn = s[i];
				if ( s[i] < minn ) minn = s[i];
			}
			pn += s[i];
		}
		ans[nn] = (pn - maxn - minn) / (n - 2);
		nn++;
	}
	for ( int i = 0; i < nn; i++) {
		cout << ans[i] << endl;
	}
	return 0;
}