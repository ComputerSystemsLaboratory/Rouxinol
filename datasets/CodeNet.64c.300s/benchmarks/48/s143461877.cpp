#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int n;
	int count;
	while (1)
	{
		cin >> n;
		if (cin.fail()) break;

		bool *isPrime;
		isPrime = new bool[n + 1];
		memset(isPrime, true, sizeof(bool) * (n + 1));
		isPrime[0] = isPrime[1] = false;
		
		count = 0;
		for (int i = 2; i <= n; ++i)
		{
			for (int j = i + i; j <= n; j += i)
			{
				isPrime[j] = false;
			}
		}
		for (int i = 0; i <= n; ++i)
		{
			if (isPrime[i] == true)
				++count;
		}
		cout << count << endl;
		delete[] isPrime;
	}
	return 0;
}