#include <iostream>

using namespace std;

int main() {
	long int n, a[10000];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
        long int minX = a[0],
		maxX = a[0],
		sum = 0;
	for (int i = 0; i < n; i++)
		if (minX > a[i])
			minX = a[i];
	for (int i = 0; i < n; i++)
		if (maxX < a[i])
			maxX = a[i];
	for (int i = 0; i < n; i++)
		sum += a[i];
	cout << minX << " " << maxX << " " << sum << endl;
}