#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int n;
	cin >> n;

	int a[10000];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int min = 10000000;
	int max = -10000000;
	long long total = 0;

	for (int i = 0; i < n; i++) {
		if (min > a[i]) {
			min = a[i];
		}
		if (max < a[i]) {
			max = a[i];
		}
		total += a[i];
	}

	printf("%d %d %lld\n", min, max, total);

	return 0;
}