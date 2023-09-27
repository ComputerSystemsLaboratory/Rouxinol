#include <iostream>

int main() {
	int W,H,x,y,r;
	std::cin >> W >> H >> x >> y >> r;
	bool x_flg,y_flg;
	
	if(x - r >= 0 & x + r <= W)
		x_flg = true;
	else
		x_flg = false;

	if(y - r >= 0 & y + r <= H)
		y_flg = true;
	else
		y_flg = false;

	if(x_flg & y_flg)
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;

	return 0;
}


