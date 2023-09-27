#include<iostream>
#include<algorithm>
using namespace std;

int main(void) {
	long s[10001], t[501];
	int n,q,count = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	sort(s,s + n);

	cin >> q;
	for (int i = 0; i < q; i++) {
		cin >> t[i];
	}
	sort(t, t + q);
	for (int i = 0; i < q; i++) {
		for (int j = 0; j < n; j++) {
			if (s[j] == t[i]) {
				count++;
				break;
			}
		}
	}
	cout << count << endl;
	return 0;
}