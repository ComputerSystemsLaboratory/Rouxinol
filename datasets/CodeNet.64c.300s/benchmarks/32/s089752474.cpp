#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
	long long a[10000], i, n, m, M, s;
	cin >> n >> a[1];
	m = a[1];
	M = a[1];
	s = a[1];
	for (i = 2;i <= n;i++) {
		cin >> a[i];
		if (a[i] < m) { m = a[i]; }
		if (a[i] > M) { M = a[i]; }
		s = s + a[i];
	}
	printf("%lld %lld %lld\n", m, M, s);
	return 0;
}
