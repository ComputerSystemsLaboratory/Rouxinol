#include <iostream>
using namespace std;

int calc(int n, int x)
{
	int res = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = i + 1; j <= n; j++) {
			for (int k = j + 1; k <= n; k++) {
				if (i + j + k == x) {
					res++;
				}
			}
		}
	}
	return res;
}

int main()
{
	int n, x;
	while (cin >> n >> x, n || x) {
		cout << calc(n, x) << endl;
	}
	return 0;
}