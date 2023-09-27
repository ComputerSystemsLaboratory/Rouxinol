#include <iostream>
#include <vector>

using namespace std;

vector<int> prime;
bool isPrime[1000000];
void primeCalc()
{
	for(int i = 0; i < 1000000; ++i)
	{
		isPrime[i] = true;
	}
	isPrime[0] = isPrime[1] = false;
	for(int i = 2; i < 1000000; ++i)
	{
		if(isPrime[i])
		{
			prime.push_back(i);
			for(int j = 2 * i; j < 1000000; j += i)
			{
				isPrime[j] = false;
			}
		}
	}
}

void solve()
{
	primeCalc();
	int a, d, n;
	while(cin >> a >> d >> n, a || d || n)
	{
		int count = 0;
		int num = a;
		int ans = 0;
		while(count < n)
		{
			if(isPrime[num])
			{
				ans = num;
				++count;
			}
			num += d;
		}
		cout << ans << endl;
	}
}

int main()
{
	solve();
	return(0);
}