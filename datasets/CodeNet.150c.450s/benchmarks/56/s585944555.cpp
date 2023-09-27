#include <iostream>
#include <cstdio>
using namespace std;

int main(void) {
	int max = -1000000, min = 1000000, n, x;
	long int sum = 0;
	cin >> n;
	while (n--) {
		cin >> x;
		max = max < x ? x : max;
		min = min > x ? x : min;
		sum += x;
	}
	printf("%d %d %ld\n", min, max, sum);
	return 0;
}