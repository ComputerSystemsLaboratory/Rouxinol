#include<iostream>
using namespace  std;
int primes[1000010];
bool isPrime(int p)
{
	bool flag = true;
	for (int i = 2; i * i <= p; i++)
	{
		if (p % i == 0)
		{
			flag = false;
			break;
		}
	}
	return flag;
}
int main()
{
	int n;
	for (int i = 0; i <= 999999; i++)primes[i] = 0;
	for (int i = 2; i <= 999999; i++)if (isPrime(i))primes[i] = 1;
	for (int i = 0; i <= 999999; i++)primes[i + 1] += primes[i];
	while (cin >> n)cout << primes[n] << endl;
	return 0;
}