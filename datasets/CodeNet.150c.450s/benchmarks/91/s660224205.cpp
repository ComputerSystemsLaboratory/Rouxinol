#include <iostream>
using namespace std;
#define MAX_N 999999

int prime[MAX_N];
bool is_prime[MAX_N];

int sieve(int n)
{
	int p = 0;
	for(int i = 0; i<=n; i++)
		is_prime[i] = true;
	
	is_prime[0] = is_prime[1] = false;
	
	for(int i=2; i<=n; i++)
	{
		if(is_prime[i])
		{
			prime[p++] = i;
			for(int j = 2*i; j<=n; j+=i)
				is_prime[j] = false;
		}
	}
	return p;
}

int main()
{
	int s;
	while( cin >> s )
	{
		cout << sieve(s) << endl;
	}
	
		
	return 0;	
} 

