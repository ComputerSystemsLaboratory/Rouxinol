#include <iostream>

using namespace std;

// ------ main ------ //

int n, k, w[100000];

bool check(long long value)
{
	long long v = 0;

	int c = 0;

	for (int i = 0; i < n; i++)
	{
		if (c >= k) { return false; }

		if (v + w[i] > value)
		{
			v = 0;

			c++; i--;
		}
		else
		{
			v += w[i];
		}
	}

	if (c > n) { return false; }

	return true;
}

int main()
{
	cin >> n >> k;

	for (int i = 0; i < n; i++) { cin >> w[i]; }

	long long l = 0;
	long long r = (1LL << 60);
	long long m;

	while (r - l > 1)
	{
		m = (l + r) / 2;

		if (check(m) == true)
		{
			r = m;
		}
		else
		{
			l = m;
		}
	}

	cout << r << endl;

	return 0;
}