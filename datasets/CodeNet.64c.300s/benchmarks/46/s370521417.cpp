#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int n)
{
	if (n < 2)
		return false;
	if (n == 2)
		return true;
	if (n % 2 == 0)
		return false;
	for (int i = 3; i <= sqrt(n); i += 2)
		if (n%i == 0)
			return false;
	return true;
}
int main()
{
	while (true)
	{
		int a, d, n;
		cin >> a >> d >> n;
		if (!a && !d && !n)
			break;
		int i = a;
		int cnt = 0;
		int ans = -1;
		while (true)
		{
			if (isPrime(i))
				cnt++;
			if (cnt == n)
			{
				ans = i;
				break;
			}
			i += d;
		}
		cout << ans << endl;
	}
}
