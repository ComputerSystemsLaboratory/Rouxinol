#include <string.h>
#include <iostream>
using namespace std;

long long n, q, x, y, m = 1;
long long a[300000];

void add(long long x, long long y) {
	long long k = m + x - 1;
	a[k] += y;
	while (k > 0) {
		k = (k - 1) / 2;
		a[k] = a[k * 2 + 1] + a[k * 2 + 2];
	}
}

long long gs(long long x, long long y, long long k, long long l, long long r) {
	if (x <= l && y >= r)
		return a[k];
	else if (x >= r || y <= l)
		return 0;
	else {
		long long lm = gs(x, y, k * 2 + 1, l, (l + r) / 2);
		long long rm = gs(x, y, k * 2 + 2, (l + r) / 2, r);

		return lm + rm;
	}
}

int main()
{
	cin >> n >> q;

	while (m <= n)
		m *= 2;

	memset(a, 0, sizeof(a));

	for (int j = 0; j < q; j++) {
		int p;
		cin >> p;

		if (p == 0) {
			cin >> x >> y;
			add(x - 1, y);
		}
		else if (p == 1) {
			cin >> x >> y;
			cout << gs(x - 1, y, 0, 0, m) << endl;
		}
	}

	return 0;
}
