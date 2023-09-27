#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, s, res;
	while (cin >> n >> s, n || s) {
		res = 0;
		for (int i = 1; i < 0x400; i++) {
			int digit = 0, sum = 0;
			for (int j = 0;j < 10; j++) {
				if ((i >> j) & 1) {
					digit++;
					sum += j;
				}
			}
			if (digit == n && sum == s) {
				res++;
			}
		}
		cout << res << endl;
	}
	return 0;
}