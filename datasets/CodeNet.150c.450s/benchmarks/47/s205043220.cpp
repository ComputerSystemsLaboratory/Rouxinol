#include <iostream>


int main(){
	int W, H, x, y, r;

	std::cin >> W >> H >> x >> y >> r;


	if(W >= (x+r) && 0 <= (x-r)){
		if(H >= (y+r) && 0 <= (y-r)){
			std::cout << "Yes" << std::endl;
		}
		else{ 
			std::cout << "No" << std::endl;
		}
	}
	else{
		std::cout << "No" << std::endl;
	}

	return 0;
}