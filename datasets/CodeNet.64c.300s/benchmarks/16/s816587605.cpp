#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	int n, R;
	cin >> n;
	cin >> R;

	int minv = R, maxv = -pow(10, 9);
	n -= 1;
	while (n--)
	{
		cin >> R;
		maxv = max(maxv, R - minv);
		minv = min(minv, R);
	}

	cout << maxv << endl;

	return 0;
}