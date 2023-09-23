#include<iostream>
int main(){
	int W, H, x, y, r;
	std::cin >> W >> H >> x >> y >> r;
	if (x < 0 || y < 0){
		std::cout << "No\n";

	}
	else if(W< x + r || x - r < 0 || H < y + r || y - r < 0){

		std::cout << "No\n";
	}
	else{
		std::cout << "Yes\n";
	}
}