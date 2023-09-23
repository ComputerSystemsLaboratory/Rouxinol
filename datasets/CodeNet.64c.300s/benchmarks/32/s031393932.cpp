#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main(void)
{
	int n, in, i;
	int ma = -1000000;
	int mi = 1000000;
	long long int sum = 0;

	cin >> n;

	for (i=0; i<n; i++) {
		cin >> in;
		ma = max(ma , in);
		mi = min(mi , in);
		sum += (long long int)in;
	}

	printf("%d %d %lld\n", mi, ma, sum);


	return 0;
}

