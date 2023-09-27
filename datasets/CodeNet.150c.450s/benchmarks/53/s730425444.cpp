#include <iostream>
#include <map>

std::map<long long, long long> prime_fact(long long n) {
	std::map<long long, long long> ret;
	for (long long i = 2; i * i <= n; i++) {
		if (n % i) continue;
		long long cnt = 0;
		while (n % i == 0) {
			n /= i;
			cnt++;
		}
		ret[i] = cnt;
	}
	if (n > 1) ret[n] = 1;
	return ret;
}

int main() {
	long long n;
	std::cin >> n;
	std::map<long long, long long> mp = prime_fact(n);
	std::cout << n << ':';
	for (auto &i : mp) {
		while (i.second--) {
			std::cout << ' ' << i.first;
		}
	}std::cout << std::endl;
}
