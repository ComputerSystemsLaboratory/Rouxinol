#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
bool isPrime(int x)
{
	for (int i = 2; i <= sqrt(x); i++)
		if (x%i == 0)
			return false;
	return true;
}
int main()
{
	int n;
	cin >> n;
	vector<int> res;
	int temp = n;
	if (isPrime(n))
		res.push_back(n);
	else
	{
		for (int i = 2; i <= n; i++)
		{
			if (isPrime(i))
				while (temp%i == 0)
				{
					res.push_back(i);
					temp /= i;
				}
			if (temp == 1)
				break;
		}
	}
	cout << n << ":";
	for (int i = 0; i < res.size(); i++)
	{
		cout << " ";
		cout << res[i];
	}
	cout << endl;
}
