#include <iostream>
#include <stdio.h>

#define MIN -1000000
#define MAX 1000000

using namespace std;
typedef long long int lint;

void answer()
{
	lint n, min, max, sum;
	lint tmp;

	cin >> n;

	min = MAX; max = MIN; sum = 0;
	for (lint i = 0; i < n; i++) {
		cin >> tmp;
		if (tmp < min) min = tmp;
		if (max < tmp) max = tmp;
		sum += tmp;
	}
	printf("%lld %lld %lld\n", min, max, sum);
}

int main()
{
	answer();
	return 0;
}