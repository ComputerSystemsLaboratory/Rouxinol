#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false), cin.tie(0);
	int N;
	while (cin >> N, N) {
		int res = 0;
		for (int i = 1; i <= 1000; i++) {
			for (int j = i + 1; j <= 1000; j++) {
				int sum = 0;
				for (int k = i; k <= j; k++) {
					sum += k;
				}
				res += sum == N;
			}
		}
		cout << res << endl;
	}
	return 0;
}

