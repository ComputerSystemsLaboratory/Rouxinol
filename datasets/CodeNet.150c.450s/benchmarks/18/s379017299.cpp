#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main() {
	int n;
	double debt = 100000;
	cin >> n;
	for (int i = 0; i < n; i++) {
		debt *= 1.05;
		debt /= 1000;
		debt = ceil(debt);
		debt *= 1000;
	}
	printf("%ld\n", (long)debt);
	return 0;
}