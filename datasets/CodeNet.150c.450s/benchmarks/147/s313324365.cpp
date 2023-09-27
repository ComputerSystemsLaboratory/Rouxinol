#include <iostream>
#include <map>
using namespace std;

int main()
{
	long long n, res;
	cin >> n;
	map<long long, long long>count;
	for (long long x = 1; x <= n; ++x)
	{
		for (long long y = 1; y <= n - x; ++y)
		{
			for (long long z = 1; z <= n - y; ++z)
			{
				res = x * x + y * y + z * z + x * y + y * z + z * x;
				if (res <= n)
				{
					count[res]++;
				}
				else break;
			}
		}
	}
	for (long long i = 1; i <= n; ++i) cout << count[i] << endl;
	ios::sync_with_stdio(false);
	cin.tie();
	cout.tie();
	return 0;
}