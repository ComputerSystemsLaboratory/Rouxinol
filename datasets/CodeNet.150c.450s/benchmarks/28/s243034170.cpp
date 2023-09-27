#include <bits/stdc++.h>
using namespace std;

int n = 0, k = 0;
int nIn[100000] = { 0 };
typedef long long ll;

int check(ll lIn)
{
	ll i = 0, j = 0;
	while (j < k)
	{
		ll lSum = 0;
		while (lSum + nIn[i] < lIn)
		{
			lSum += nIn[i];
			i++;
			if (i == n)
			{
				return j;
			}
		}
		j++;
	}
	return k;
}

int main()
{
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> nIn[i];
	}
	ll lLeft = 0, lRight = 100000 * 10000;
	ll LMid = 0;
	while (lLeft + 1 < lRight)
	{
		LMid = (lLeft + lRight) / 2;
		if (check(LMid) < k)
		{
			lRight = LMid;
		}
		else
		{
			lLeft = LMid;
		}
	}
	cout << lLeft << endl;
	return 0;
}
