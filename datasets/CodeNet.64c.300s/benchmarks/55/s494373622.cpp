#include <iostream>

int main() {
	int input, i=1;
	while(1) {
		std::cin >> input;
		if(input == 0) {
			break;
		}
		std::cout << "Case " << i++ << ": " << input << std::endl;
	}
}