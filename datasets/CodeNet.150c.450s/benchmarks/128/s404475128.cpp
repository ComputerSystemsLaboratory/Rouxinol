#include <iostream>
#include <algorithm>
#include <string>

int main(void){
	std::string seq;
	std::cin >> seq;

	std::reverse(seq.begin(), seq.end());

	std::cout << seq << std::endl;
	return 0;
}