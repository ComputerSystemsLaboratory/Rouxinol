#include <iostream>
#include <vector>
#include <cstdint>
#include <cmath>

std::vector<uint32_t> getPrimeFact(uint32_t);

int main() {
	uint32_t n;
	std::cin >> n;
	std::vector<uint32_t>&& fact = getPrimeFact(n);
	std::cout << n << ": ";
	for (uint32_t i=0; i<fact.size(); i++) {
		if (i<fact.size()-1) {
			std::cout << fact[i] << " ";
		} else {
			std::cout << fact[i] << std::endl;
		}
	}
}

std::vector<uint32_t> getPrimeFact(uint32_t n) {
	std::vector<uint32_t> fact;
	uint32_t n_sq = sqrt(n);
	while (n > 1) {
		for (uint32_t i=2; i<=n_sq; i++) {
			if (n%i == 0) {
				fact.push_back(i);
				n /= i;
				break;
			}
			if ( i == n_sq ) {
				fact.push_back(n);
				n = 1;
			}
		}
	}
	return fact;
}