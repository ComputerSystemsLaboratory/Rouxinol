#include <iostream>
#include <cmath>
bool isprime(unsigned x){
	if(x == 2)
		return true;
	if(x < 2 || x % 2 == 0)
		return false;

	unsigned i = 3;
	while ( i <= static_cast<unsigned int>(sqrt(x)) ) {
		if (x % i == 0)
			return false;
		i += 2;
	} 
	return true;
}

int main(int argc, char const* argv[])
{
	unsigned n;
	unsigned int count = 0;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		unsigned x;
		std::cin >> x;
		if (isprime(x)) {
			++count;
		}
	}
	std::cout << count << std::endl;
	
	return 0;
}