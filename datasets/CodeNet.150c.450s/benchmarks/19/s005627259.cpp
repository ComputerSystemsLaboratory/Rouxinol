#include<iostream>

int main(){
	int x, y;
	int tmp;
	std::cin >> x;
	std::cin >> y;
	while (x != 0 || y != 0){
		if (x > y){
			tmp = x;
			x = y;
			y = tmp;
		}
		std::cout << x << " " << y << '\n';
		std::cin >> x;
		std::cin >> y;
	}
}