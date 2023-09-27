#include <iostream>
using namespace std;

int main() {

	long int n;
	cin >> n;
	int* a = new int[n];
	long int min, max, sum;
	min = 1000000;
	max = -1000000;
	sum = 0;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (min > a[i])
			min = a[i];
		if (max < a[i])
			max = a[i];
	
		sum = sum + a[i];
	}
	cout << min << " " << max << " " << sum << "\n";
}