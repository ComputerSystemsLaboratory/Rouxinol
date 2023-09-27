#include<iostream>


int main(void){
	int W,H,x,y,r;
	bool flag = true;

	std::cin >> W >> H >> x >> y >> r;


	if(x+r > W ) flag = false;
	if(y+r > H ) flag = false;
	if(x-r < 0) flag = 0;
	if(y-r < 0) flag = 0;

	if(flag == true){
		std::cout << "Yes" << std::endl;
	}else {
		std::cout << "No" << std::endl;
	}


}