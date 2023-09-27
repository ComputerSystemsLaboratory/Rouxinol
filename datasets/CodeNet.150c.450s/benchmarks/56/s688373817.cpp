#include <iostream>
using namespace std;
int main()
{
	long long n, i, a, b, t, r;
	cin >> n;
	i = 1;
	a = 1000000;
	b = -1000000;
	r = 0;
	0 < n <= 10000;
	while (i <= n)
	{
		cin >> t;
		-1000000 <= t <= 1000000;
		if (t < a) a = t;
		if (t > b) b = t;
		r += t;
		i++;
	}
	cout << a << " " << b << " " << r << endl;
}