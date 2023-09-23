#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	while (n--) {
		int a[10];
		for (int i = 0; i < 10; i++) {
			cin >> a[i];
		}
		bool res = false;
		for (int i = 0; i < (1 << 10); i++) {
			bool flag = true;
			int am = 0, bm = 0;
			for (int j = 0; j < 10; j++) {
				if (i & (1 << j)) {
					if (a[j] > am) {
						am = a[j];
					}
					else {
						flag = false;
						break;
					}
				}
				else {
					if (a[j] > bm) {
						bm = a[j];
					}
					else {
						flag = false;
						break;
					}
				}
			}
			if (flag) {
				res = true;
			}
		}
		cout << (res ? "YES" : "NO") << endl;
	}
	return 0;
}