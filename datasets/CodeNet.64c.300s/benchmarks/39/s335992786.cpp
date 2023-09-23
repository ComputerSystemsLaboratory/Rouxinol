#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;

	while (cin >> n) {
		int cnt = 0;

		for (int i = 0; i <= 9; ++i) {
			for (int j = 0; j <= 9; ++j) {
				for (int k = 0; k <= 9; ++k) {
					int a = n - i - j - k;
					if (0 <= a && a <= 9) cnt++;
				}
			}
		}

		cout << cnt << endl;
	}
}