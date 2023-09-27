#include <iostream>
#include <string>

template<typename Type>
Type input() {
	Type value;
	std::cin >> value;
	return value;
}

void debug(int x, std::string msg = "debug") {
	std::cout << msg<<" : "<< x << std::endl;
}

bool isPrime(int N) {
	if(N == 1) return false;
	if(N == 2) return true;
	if(N % 2 == 0) return false;
	for(int i = 3; i*i <= N; i += 2) {
		if(N % i == 0) return false;
	}

	return true;
}

int howmanyPrime( int *numbers, const int n) {
//std::cout << ": "<< numof(numbers) << std::endl;
	int count = 0;
	for(int i = 0; i < n; ++i) {
		if( isPrime( numbers[ i ] ) ) {
			++count;
		} else {
		}
	}
	return count;
}

int main() {
	// 1 <= n <= 10,000 ??\??????????????´??°?????°
	const int n = input<int>();
	// 2 <= numbers[i] <= 10^8 ( 0<=i<=n-1) ?????????????????´??°
	int numbers[ n ];
	for(int i = 0; i < n; ++i)
		numbers[ i ] = input<int>();

	std::cout << howmanyPrime( numbers, n) << std::endl;

	return 0;
}