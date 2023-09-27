#include <iostream>

typedef long long ll;
const int MAX = 100010;
ll n, k;
int T[MAX];

bool enough(ll P);
ll binarySearch();

int main()
{
	using namespace std;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> T[i];
	}
	cout << binarySearch() << endl;
}

bool enough(ll P)
{
	int i = 0;
	for (int j = 0; j < k; j++)
	{
		int sum = 0;
		while (sum + T[i] <= P && i < n)
		{
			sum += T[i];
			i++;
		}
		if (i >= n)
		{
			return true;
		}
	}
	return false;
}

ll binarySearch()
{
	ll low = 0, high = 100000 * 10000;
	while (high - low > 1)
	{
		ll mid = (low + high) / 2;
		if (enough(mid))
		{
			high = mid;
		}
		else
		{
			low = mid;
		}
	}
	return high;
}
