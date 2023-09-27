#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

long isPrime(long n);

long nextPrime(long n) {
	// return the next prime
	long i;
	for (i = n+1; i < LONG_MAX; i++) {
		if (isPrime(i)) return i;
	}
	return 0;
}

long isPrime (long n) {
    int i;
    if (n < 2) return 0;
    else if (n == 2) return 1;
    if (n % 2 == 0) return 0;
    for (i = 3; i <= n / i; i += 2)
         if (n % i == 0) return 0;
    return 1;
}
/*
   36 % 2 = 0
-> 18 % 2 = 0
-> 9 % 2 = 1
-> n != 1
-> 9 % nextPrime(2)
-> 9 % 3 = 0
-> 3 % 3 = 0
-> 1 % 3 = 1
-> n == 1 
-> break
*/

/* 
   n = 13
   sqrt(13) ~~ 3.60
   13 % 2 = 1
-> 13 != 1
-> nextPrime(2) = 3 < sqrt(13)
-> 13 % 3 = 1
-> 13 != 1
-> nextPrime(3) = 5 > sqrt(13)
-> cout << n; break;
*/

int main() {
	long n;
	cin >> n;
	// round up sqrt(n)
	long limit = ceil(sqrt(n));
	long divisor = 2;
	cout << n << ':';
	while (1) {
		if (n % divisor == 0) {
			cout << ' ' << divisor;
			n /= divisor;
		} else if ((n != 1) && (nextPrime(divisor) < limit)) {
			divisor = nextPrime(divisor);
		} else {
			if (n != 1) cout << ' ' << n << '\n';
			else cout << '\n';
			break;
		}
	}
	return 0;
}