#include <iostream>
using namespace std;
#define MAX_N 999999 + 16
 
int  prime[MAX_N];			
bool is_prime[MAX_N + 1];	
int sieve(const int& n)
{
	int p = 0;
	fill(is_prime, is_prime + n + 1, true);
	is_prime[0] = is_prime[1] = false;
	for (int i = 2; i <= n; ++i)
	{
		if (is_prime[i])
		{
			prime[p++] = i;
			for (int j = 2 * i; j <= n; j += i)
			{
				is_prime[j] = false;
			}
		}
	}
	return p;
}
 
int main(int argc, char *argv[])
{
	int n;
	while (cin >> n)
	{
		cout << sieve(n) << endl;
	}
	return 0;
}