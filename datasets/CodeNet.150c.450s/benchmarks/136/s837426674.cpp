#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
long long gcd(long long x, long long y) {
	if (y == 0)return x;
	return gcd(y, x%y);
}
int main()
{
	long long a,b;
	while (cin >> a>>b) {
		long long c, d;
		c = gcd(a, b);
		d = c*(a / c)*(b / c);
		cout << c <<' '<< d << endl;
	}
	return 0;
}