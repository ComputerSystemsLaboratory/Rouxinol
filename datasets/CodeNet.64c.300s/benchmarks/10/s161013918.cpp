#include<iostream>
int main(){
	int x,y;
	while (true){
		std::cin >> x>>y;
		if (x == 0 && y == 0){
			break;
		}
		else if (x <= y){
			std::cout << x << " " << y << "\n";
		}
		else if (y < x){
			std::cout << y << " " << x << "\n";
		}
	}
	return 0;
}