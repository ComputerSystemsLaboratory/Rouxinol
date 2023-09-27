#include <iostream>
#include <vector>
using namespace std;

int main()
{
	long n = 0, k = 0, ttl = 0;
	int max = 0;

	cin >> n >> k;

	vector<long> w(n);

	for (long i = 0; i < n; i++) {
		int t;
		cin >> t;
		ttl += t;
		w[i] = t;
		if (t > max)
			max = t;
	}

	int s = 0, p = 0;
	long c = 1;

	if (max > ttl / k)
		p = max;
	else
		p = ttl / k;

	for (long i = 0; i < n; i++) {
		if (s + w[i] <= p)
			s += w[i];
		else {
			s = w[i];
			c++;
		}
		if (c > k) {
			s = 0;
			c = 1;
			i = -1;
			p++;
		}
	}

	cout << p << endl;

	return 0;
}