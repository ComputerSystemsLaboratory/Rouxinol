#include <iostream>
int main(){
	int w,h,x,y,r;
	std::cin >> w;
	std::cin >> h;
	std::cin >> x;
	std::cin >> y;
	std::cin >> r;
	if(w - r >= x && x >= r && h - r >= y && y >= r){
		std::cout << "Yes" <<std::endl;
	}else{
		std::cout << "No" <<std::endl;
	}}