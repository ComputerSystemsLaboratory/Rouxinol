#include <iostream>

int main(int argc, char **argv){
	int a = 0;
	int b = 0;

	std::cin >> a >> b;

	std::cout << a * b << " " << 2 * (a + b) << std::endl;
	return 0;
}