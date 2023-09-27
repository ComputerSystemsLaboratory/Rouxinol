#include<iostream>

int main()
{
	int n;
	std::cin >> n;
	int input_numbers[n];
	for(int i=0; i<n; i++) {
		std::cin >> input_numbers[i];
	}
	for(int i=n-1; i>=0; i--) {
		std::cout << input_numbers[i];
		if(i != 0) {
			std::cout << " ";
		} else {
			std::cout << "\n";
		}
	}

	return 0;
}