#include <iostream>

int main() {
	int n, i;
	std::cin >> n;
	int array[n];
	
	for(i=0; i<n; i++) {
		std::cin >> array[i];
	}
	for(i=n-1; i>0; i--) {
		std::cout << array[i] << " ";
	}
	std::cout << array[0] << std::endl;
}