#include <iostream>
#define INPUT_FROM_FILE (0)

#if INPUT_FROM_FILE
#include <fstream>
#endif

int gcd(int a, int b){
	if(a % b == 0){
		return b;
	}
	return gcd(b, a % b);
}

int main(int argc, char **argv) {
#if INPUT_FROM_FILE
	std::ifstream ifs("test.txt");
#endif
	int a = 0;
	int b = 0;

#if INPUT_FROM_FILE
	ifs >> a >> b;
#else
	std::cin >> a >> b;
#endif

	if(a < b){
		std::swap(a, b);
	}
	std::cout << gcd(a, b) << std::endl;
	return 0;
}