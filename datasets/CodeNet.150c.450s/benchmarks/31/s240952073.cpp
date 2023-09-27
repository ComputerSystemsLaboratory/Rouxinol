#include <iostream>
using namespace std;

#define INT32_MIN -2147483647-1

int main()
{
	int n, max = INT32_MIN, min;
	cin >> n;
	cin >> min;
	int x;

	for (int i = 1; i < n; i++) {
		cin >> x;
		max = (x - min) > max ? x - min : max;
		min = min > x ? x : min;
	}
	cout << max << "\n";
	return 0;
}