#include <iostream>

int main() {
	const int size = 5;
	int arr[size];
	std::cin
		>> arr[0]
		>> arr[1]
		>> arr[2]
		>> arr[3]
		>> arr[4];

	// sort
	for (int i = 0; i < size; i++)
		for (int j = i + 1; j < size; j++)
			if (arr[i] < arr[j]) {
				std::swap(arr[i], arr[j]);
			}
			

	// show
	for (int i = 0; i < size - 1; i++)
		std::cout << arr[i] << " ";
	
	std::cout << arr[4] << std::endl;
}