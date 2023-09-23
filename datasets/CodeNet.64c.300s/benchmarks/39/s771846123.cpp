#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	int n, res;
	while (cin >> n) {
		res = 0;
		for (int a = 0; a < 10; a++) {
			for (int b = 0; b < 10; b++) {
				for (int c = 0; c < 10; c++) {
					for (int d = 0; d < 10; d++) {
						if (a + b + c + d == n) {
							res++;
						}
					}
				}
			}
		}
		cout << res << endl;
	}
	return 0;
}