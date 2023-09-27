#include<iostream>

using namespace std;

int w[100000];
int n, k;

int count(long long P)
{
	int count = 0, i;
	long long Pn;
	for (i = k; i > 0; i--)
	{
		Pn = P;
		while (Pn - w[count] >= 0)
		{
			Pn -= w[count];
			count++;
			if (count == n)return count;
		}
	}
	return count;
}

int main()
{
	int i;
	long long max = 0, right, left, mid;
	cin >> n >> k;
	for (i = 0; i < n; i++)
	{
		cin >> w[i];
		if (max < w[i])max = w[i];
	}
	max *= n / k + 1;
	left = 0;
	right = max + 1;
	while (left < right)
	{
		mid = (left + right) / 2;
		if (count(mid) == n)right = mid;
		else
		{
			if (count(mid + 1) == n)
			{
				mid++;
				break;
			}
			else left = mid + 1;
		}
	}
	cout << mid << endl;
    return 0;
}