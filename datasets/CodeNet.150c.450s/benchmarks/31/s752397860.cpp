#include <iostream>
#include <algorithm>

using namespace std;

#define MAX1 200000
#define MINF (-1 * (10*10*10*10*10*10*10*10*10))

int main() {
	int ar[MAX1];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> ar[i];

	int vmax = ar[0], vmin = ar[0];
	int res = MINF;
	bool f = true;
	for (int i = 1; i < n; i++) {
		if (vmin > ar[i]) {
			vmin = vmax = ar[i];
			if (f)
				res = max(res, ar[i] - ar[i - 1]);
		}
		else if (vmax <= ar[i]) {
			f = false;
			vmax = ar[i];
			res = max(res, vmax - vmin);
		}
	}
	cout << res << endl;

	return 0;
}