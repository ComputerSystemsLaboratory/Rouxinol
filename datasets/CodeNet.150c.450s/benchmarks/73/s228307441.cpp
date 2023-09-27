#include <iostream>
#include <string.h>
using namespace std;

int n, q, x, y, t;
int a[100000];

int main()
{
	cin >> n >> q;

	memset(a, 0, sizeof(a));

	for (int i = 0; i < q; i++) {
		cin >> t;

		if (t == 0) {
			cin >> x >> y;
			a[x] += y;
		}
		else if (t == 1) {
			cin >> x >> y;

			int m = 0;
			for (int j = x; j <= y; j++)
				m += a[j];
			
			cout << m << endl;
		}
	}

	return 0;
}
