#include <iostream>
#include <cmath>
#include <cstring>
#define N 1000000
using namespace std;

int main()
{
	int a, d, n, i;
	bool prime[N];
	
	memset(prime, true, sizeof(prime));
	prime[0] = prime[1] = false;
	for (i = 2; i < sqrt(N) + 1; i++) {
		if (prime[i]) {
			for (int j = 2 * i; j < N; j += i) {
				prime[j] = false;
			}
		}
	}
	
	while (cin >> a >> d >> n, a) {
		for (i = a; n; i += d) {
			if (prime[i]) n--;
		}
		cout << i - d << endl;
	}
	
	return 0;
}