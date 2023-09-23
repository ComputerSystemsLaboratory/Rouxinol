#include <iostream>
#include <math.h>

int prime[500000];

bool isprime( int a )
{
	if ( a == 1 ) return false;
	int b = sqrt(a);
	for ( int k = 0; k < 500000; ++k ) {
		if ( prime[k] > b ) break;

		if ( a % prime[k] == 0 ) return false;
	}
	return true;
}

int main()
{
	int i = 1;
	prime[0] = 2;
	prime[1] = 3;

	for ( int j = 1; j < 500000; ++j ) {
		if (prime[j-1] >= sqrt(1000000) ) break;
		//std::cout << prime[j-1] << std::endl;
		int a = prime[j-1] + 1;
		while ( true ) {
			int k;
			for ( k = 0; k < j; ++k ) {
				if ( a % prime[k] == 0 ) break;
			}
			if ( k == j ) {
				prime[j] = a;
				break;
			}
			a++;
		}
	}

	while(true)
	{
		int a, d, n;
		std::cin >> a >> d >> n;
		if ( a == 0 && d == 0 && n == 0 ) break;

		int r = a;
		while(true) {
			if ( isprime(r) == true ) n--;
			if ( n == 0 ) break;
			r += d;
		}
		std::cout << r << std::endl;
	}

	return 0;
}