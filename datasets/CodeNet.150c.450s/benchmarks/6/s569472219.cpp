#include <iostream>


int main(){
	int a = 0, b = 0, c = 0;

	scanf("%d %d %d", &a, &b, &c);

	if (a < b && b < c){
		std::cout << "Yes" << std::endl;
	}else{
		std::cout << "No" << std::endl;
	}

	return 0;
}