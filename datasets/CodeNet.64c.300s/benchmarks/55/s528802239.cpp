#include<iostream>

int main(void){
	int i = 1, x;
	while (1){
		std::cin >> x;
		if (x == 0) break;
		std::cout << "Case " << i++ << ": " << x << std::endl; 
	}
	
	return 0;
}