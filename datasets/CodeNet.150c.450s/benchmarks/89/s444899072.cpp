#include <iostream>
#include <vector>

constexpr int primeMax = 1000000;

bool isPrime[primeMax + 1];
std::vector<int> primeNumbers;

void erat(){
	primeNumbers.reserve(primeMax + 1);
	std::fill(isPrime, isPrime + primeMax + 1, true);
	isPrime[1] = false;
	for(int i = 2; i <= primeMax; ++i){
		if(isPrime[i]){
			primeNumbers.emplace_back(i);
			for(int j = i * 2; j <= primeMax; j += i){
				isPrime[j] = false;
			}
		}
	}
}

int main(){
	erat();

	int a, d, n;
	while(std::cin >> a >> d >> n, a + d + n){
		int cnt = 0;
		for(auto&& p : primeNumbers){
			if(p >= a && (p - a) % d == 0){
				++cnt;

				if(cnt == n){
					std::cout << p << std::endl;
				}
			}
		}
	}
}