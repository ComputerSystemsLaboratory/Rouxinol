#include <iostream>


int func(int n){
	int count = 0;

	for (int a = 0; a <= 9; a++){
		for (int b = 0; b <= 9; b++){
			for (int c = 0; c <= 9; c++){
				for (int d = 0; d <= 9; d++){
					if (a + b + c + d == n){
						count++;
					}
				}
			}
		}
	}

	return count;
}



int main(){
	int input;

	while (std::cin >> input){
			std::cout << func(input) << "\n";
	}
	
	return 0;
}