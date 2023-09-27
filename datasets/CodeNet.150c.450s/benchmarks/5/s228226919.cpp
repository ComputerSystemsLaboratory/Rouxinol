#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int n;

	cin >> n;

	int a[100];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = n-1; i > 0; i--) {
		printf("%d ", a[i]);
	}
	printf("%d\n", a[0]);

	return 0;
}