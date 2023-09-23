#include<iostream>

int main(){
	int a, b, c;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	if (a < b){
		if (b < c)
			std::cout << "Yes" << '\n';
		else
			std::cout << "No" << '\n';
	}
	else
		std::cout << "No" << '\n';
}