#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int main() {
	int n, *a;
	cin >> n;
	a = new int[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	long long sum = 0;
	for (int i = 0; i < n; i++)
		sum += a[i];

	printf("%d %d %ld\n", a[0], a[n-1], sum);
	return 0;
}