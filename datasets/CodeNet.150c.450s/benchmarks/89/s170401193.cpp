#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	while(true) {
		int a, d, n;
		cin >> a >> d >> n;

		if(a == 0 && d == 0 && n == 0) break;

		vector<int> primes;
		vector<bool> is_prime(1000000, true);

		is_prime[0] = false;
		is_prime[1] = false;

		for(int i = 2; i < is_prime.size(); ++i) {
			if(!is_prime[i]) continue;

			for(int j = i * 2; j < is_prime.size(); j+=i) {
				is_prime[j] = false;
			}
		}

		int cnt = 0;
		for(int i = a; i < is_prime.size(); i+=d) {
			if(!is_prime[i]) continue;

			++cnt;
			if(cnt == n) {
				cout << i << endl;
				break;
			}
		}
	}

	return 0;
}