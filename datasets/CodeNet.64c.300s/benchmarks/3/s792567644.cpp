#include <iostream>


int main(){
	int number;
	std::cin >> number;
	int* array;
	array = new int[number];
	for(int i=0;i<number;i++){
		std::cin >> array[i];
		}
	for(int j=number-1; j>=0; j--){
		std::cout << array[j];
		if( j != 0){
			std::cout << " ";
		}
	}
std::cout << std::endl;
}