#include <iostream>
using namespace std;

int main()
{
	int n, max = -1000000000, min;
	cin >> n;
	cin >> min;
	int x;

	for (int i = 1; i < n; i++) {
		cin >> x;
		if ((x - min) > max) max = x - min;
		if (min > x) min = x;
	}

	cout << max << "\n";
	return 0;
}