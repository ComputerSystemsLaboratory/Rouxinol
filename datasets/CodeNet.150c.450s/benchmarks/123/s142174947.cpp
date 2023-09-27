#include <bits/stdc++.h>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

bool isPrime(int x)
{
	if (x == 2)
	{
		return true;
	}
	if (x < 2 || x % 2 == 0)
	{
		return false;
	}

	int i = 3;

	while (i <= static_cast<int>(sqrt(x)))
	{
		if (x % i == 0)
		{
			return false;
		}
		i = i + 2;
	}
	return true;
}

int main()
{
	int ans = 0;
	int biggest_number = 0;
	vector<bool> v(100000000);

	int n;
	while (cin >> n)
	{
		if (n > biggest_number)
		{

			biggest_number = n;
		}
		v[n] = true;
	}
	
	for (int i = 0; i < biggest_number + 1; i++)
	{
		if (v[i] == true)
		{
			if (isPrime(i))
			{
				ans++;
			}
		}
	}
	
	cout << ans << endl;
	return 0;
}