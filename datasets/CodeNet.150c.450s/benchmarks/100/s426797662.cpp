#include <iostream>

long long int fractorial(int n){
	if(n == 0)
		return 1;
	else
		return n*fractorial(n-1);
}

int main() {
	int n;
	std::cin >> n;
	std::cout << fractorial(n) << std::endl;
	return 0;
}