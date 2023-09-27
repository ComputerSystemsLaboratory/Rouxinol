#include <iostream>

typedef long long ll;
const ll MAX = 100000;


int check(ll P);	//checking how many goods can be loaded by k trucks whose largest carrying limits are P
//time complexity O(n)
ll solve();		//use binary search through the interval of input limit to determine min(P)
//time complexity O(logP)
//check(ll P) invoked in solve(), so the total time complexity is O(nlogP)
int n, k;
int T[100000];

	using namespace std;
int main()
{
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> T[i];
	}
	ll ans = solve();
	cout << ans << endl;
	return 0;
}

int check(ll P)
{
	int i = 0;
	for (int j = 0; j < k; j++)
	{
		int sum = 0;
		while (i<n&&sum + T[i] <= P)
		{
			sum += T[i];
			i++;
		}
		if (i >= n)
		{
			return n;
		}
	}
	return i;
}

ll solve()
{
	ll left = 0;
	ll right = 100000 * 10000;
	ll mid;
	while (right - left > 1)
	{
		mid = (left + right) / 2;
		int v = check(mid);
		if (v >= n)
		{
			right = mid;
		}
		else
		{
			left = mid;
		}
	}
	return right;
}
