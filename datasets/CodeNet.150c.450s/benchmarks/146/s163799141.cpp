#include<iostream>

int main(){

	int n;
	std::cin >> n;

	for (int i = 0; i < n; i++){

		float x1, y1, x2, y2, x3, y3, x4, y4;
		std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

		if (((y2 - y1) / (x2 - x1)) == ((y4 - y3) / (x4 - x3)))std::cout << "YES" << std::endl;
		else std::cout << "NO" << std::endl;
	}

	return 0;
}