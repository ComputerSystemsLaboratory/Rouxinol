#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int r[200000], i, maxv = -1000000000, minv, n;
	cin >> n;
	for (i = 0;i < n;i++) {
		cin >> r[i];
	}

	minv = r[0];
	for (i = 1;i < n;i++) {
		maxv = max(maxv, r[i] - minv);
		minv = min(minv, r[i]);
	}

	cout << maxv << endl;

	return 0;

}
